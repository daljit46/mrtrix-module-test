function(add_mrtrix_cpp_cmd name file)
    add_executable(${name} ${file})
    target_link_libraries(${name} 
        mrtrix::core
        mrtrix::headless
        exec-version-lib
    )
endfunction()