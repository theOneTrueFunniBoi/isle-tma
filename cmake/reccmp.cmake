function(reccmp_find_project RESULT)
    set(curdir "${CMAKE_CURRENT_SOURCE_DIR}")
    while(1)
        if(EXISTS "${curdir}/reccmp-project.yml")
            break()
        endif()
        get_filename_component(nextdir "${curdir}" DIRECTORY)
        if(nextdir STREQUAL curdir)
            set(curdir "${RESULT}-NOTFOUND")
            break()
        endif()
        set(curdir "${nextdir}")
    endwhile()
    set("${RESULT}" "${curdir}" PARENT_SCOPE)
endfunction()

function(reccmp_add_target TARGET)
    cmake_parse_arguments(ARGS "" "ID" "" ${ARGN})
    if(NOT ARGS_ID)
        message(FATAL_ERROR "Missing ID argument")
    endif()
    set_property(TARGET ${TARGET} PROPERTY INTERFACE_RECCMP_ID "${ARGS_ID}")
    set_property(GLOBAL APPEND PROPERTY RECCMP_TARGETS ${TARGET})
endfunction()

function(reccmp_configure)
    cmake_parse_arguments(ARGS "COPY_TO_SOURCE_FOLDER" "DIR" "" ${ARGN})
    set(binary_dir "${CMAKE_BINARY_DIR}")
    if(ARGS_DIR)
        set(binary_dir "${ARGS_DIR}")
    endif()

    reccmp_find_project(reccmp_project_dir)
    if(NOT reccmp_project_dir)
        message(FATAL_ERROR "Cannot find reccmp-project.yml")
    endif()

    if(CMAKE_CONFIGURATION_TYPES)
        set(outputdir "${binary_dir}/$<CONFIG>")
    else()
        set(outputdir "${binary_dir}")
    endif()
    set(build_yml_txt "project: '${reccmp_project_dir}'\ntargets:\n")
    get_property(RECCMP_TARGETS GLOBAL PROPERTY RECCMP_TARGETS)
    foreach(target ${RECCMP_TARGETS})
        get_property(id TARGET "${target}" PROPERTY INTERFACE_RECCMP_ID)
        string(APPEND build_yml_txt "  ${id}:\n")
        string(APPEND build_yml_txt "    path: '$<TARGET_FILE:${target}>'\n")
        if(WIN32 AND MSVC)
            string(APPEND build_yml_txt "    pdb: '$<TARGET_PDB_FILE:${target}>'\n")
        endif()
    endforeach()
    file(GENERATE OUTPUT "${outputdir}/reccmp-build.yml" CONTENT "${build_yml_txt}")

    if(ARGS_COPY_TO_SOURCE_FOLDER)
        file(GENERATE OUTPUT "${CMAKE_SOURCE_DIR}/reccmp-build.yml" CONTENT "${build_yml_txt}" CONDITION $<CONFIG:Release>)
    endif()
endfunction()