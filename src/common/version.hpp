#pragma once

// for cmake
// 用于在CMakeLists文件中解析用
// 0.1.0    
#define VR_APP_VER_MAJOR 0
#define VR_APP_VER_MINOR 0
#define VR_APP_VER_PATCH 1

#define VR_APP_VERSION (VR_APP_VER_MAJOR*10000 + VR_APP_VER_MINOR*100 + VR_APP_VER_PATCH)



// for source code
// 用于在项目源码中获取版本号字符串
// v0.1.0  
#define _VR_APP_STR(s) #s                                                       
#define VR_PROJECT_VERSION(major, minor, patch) "v" _VR_APP_STR(major.minor.patch)