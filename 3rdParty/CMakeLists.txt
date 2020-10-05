add_subdirectory("box2d")

function(lnk_deps TARGET)
    target_link_libraries(${TARGET} PRIVATE box2d)
endfunction()
