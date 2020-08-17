project("libabc")

# 添加包含目录,CMake将在这些目录寻找*.cpp 文件中引用到的头文件;
include_directories("${PROJECT_SOURCE_DIR}/include")
# 指定编译后的库文件的输出路径;
set( LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib )


set_target_properties( ${PROJECT_NAME} PROPERTIES OUTPUT_NAME ${PROJECT_NAME} )
# 允许静态库与动态库同时存在。
set_target_properties( ${PROJECT_NAME} PROPERTIES CLEAN_DIRECT_OUTPUT 1 )
set_target_properties( "${PROJECT_NAME}_static" PROPERTIES CLEAN_DIRECT_OUTPUT 1 )

set(SourceFiles
    abc.cpp)
    # 生成目标动态库。
add_library( ${PROJECT_NAME} SHARED ${SourceFiles} )
set_target_properties( ${PROJECT_NAME} "ROPERTIES VERSION 1.0 SOVERSION 1" )
