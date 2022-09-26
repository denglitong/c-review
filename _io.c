//
// Created by Litong Deng on 2022/9/26.
//

#include <stdio.h>
#include <unistd.h>

#include "_io.h"

/**
 * 确定文件的访问权限
 *  int access(const char *file, int auth);
 *      int auth 为 0 表示测试文件是否存在
 *      int auth 为 2 表示测试文件是否可写
 *      测试结果为允许返回 0，否则返回 -1
 */
void show_access() {
    char file_name[] = "/tmp";
    if (access(file_name, 0) == 0) {
        printf("%s exists.\n", file_name);
    } else {
        printf("%s doesn't exist.\n", file_name);
    }
    if (access(file_name, 2)) {
        printf("%s is writable.\n", file_name);
    } else {
        printf("%s is not writable.\n", file_name);
    }
}

void show_io() {
    show_access();
}
