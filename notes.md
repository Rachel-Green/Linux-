# Linux第二周课程笔记
## 命令相关
- 备份环境变量文件：echo $PATH>path.bk （学会'>'的使用）
- 暂时修改环境变量：export PATH=/home/yan/share/usr/local/arm/3.4.1/bin:$PATH，可以使暂时添加到环境变量的目录下的可执行文件无须加'./'
- /proc 目录下包含了当前所有进程的进程号，用（kill+进程号）命令可以结束进程
