project("test_libabc")

include_directories( ${PROJECT_SOURCE_DIR}/include )
link_directories( ${PROJECT_SOURCE_DIR}/lib )
aux_source_directory(. SourceFiles )

set( EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin )

link_directories( ${PROJECT_SOURCE_DIR}/lib )
target_link_libraries(${PROJECT_NAME} abc)