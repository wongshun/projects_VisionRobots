# 项目编码实践标准

## 软件版本管理
不管是SDK或者是APP项目,都会有一个版本,用来记录软件发布的每个节点.软件版本可以方便用户或者自己清楚的知道每个版本都有哪些内容的更新,可以对版本做出使用的选择或者解决版本中遇到的bug.
实现版本的管理,需要能够在编译过程中清楚的体现当前版本号,在软件中也能够获取版本号.
这里版本编号的管理使用常见的major.minor(.patch)格式,major是最大的版本编号,minor为其次,patch对应着小版本里的补丁级别.当有极大的更新时,会增加major的版号,而当有大更新,但不至于更新major时,会更新minor的版号,若更新比较小,例如只是bug fixing，则会更新patch的版号。版本号格式示例：v1.0 、v1.2.2等;

在优雅的构建软件模板中，我们将版本信息放置于src/common/version.hpp文件中:
注:所有的文件路径都是相对项目根目录而言.
```
#pragma once                                                                       
// for cmake
// 用于在CMakeLists文件中解析用
// 0.1.0                                                                 
#define HELLO_APP_VER_MAJOR 0                                                      
#define HELLO_APP_VER_MINOR 1                                                      
#define HELLO_APP_VER_PATCH 0                                                      

#define HELLO_APP_VERSION (HELLO_APP_VER_MAJOR * 10000 + HELLO_APP_VER_MINOR * 100 + HELLO_APP_VER_PATCH)

// for source code
// 用于在项目源码中获取版本号字符串
// v0.1.0                                                           
#define _HELLO_APP_STR(s) #s                                                       
#define HELLO_PROJECT_VERSION(major, minor, patch) "v" _HELLO_APP_STR(major.minor.patch)
```

# 参考文档
- https://www.cnblogs.com/yicm/p/12526612.html


