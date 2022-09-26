//
// Created by Litong Deng on 2022/9/26.
//

#include <stdio.h>
#include <sys/stat.h>
#include <sys/file.h>
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
    char *file_name = "/tmp";
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

void show_chmod() {
    char *file_name = "./c_review";
    if (chmod(file_name, S_IREAD) == 0) {
        printf("Made %s read-only", file_name);
    } else {
        printf("Couldn't make %s read-only", file_name);
    }
}

void show_remove_create_open_close() {
    char *file_name = "./test/file.txt";
    int fd;

    // 创建成功返回文件句柄，失败返回-1
    if ((fd = creat(file_name, S_IREAD + S_IWRITE + S_IEXEC)) == -1) {
        printf("Can not create the file: %s\n", file_name);
        return;
    } else {
        printf("Created file: %s\n", file_name);
    }

    // 创建成功返回文件句柄，失败返回-1
    if ((fd = open(file_name, S_IREAD)) == -1) {
        printf("Can not open the file: %s\n", file_name);
        return;
    } else {
        printf("Open file: %s successfully.\n", file_name);
    }

    // 创建成功返回0，失败返回-1
    if (close(fd) == 0) {
        printf("Close file %s successfully, fd: %d.\n", file_name, fd);
    } else {
        printf("Close file %s failed, fd: %d.\n", file_name, fd);
    }

    // 创建成功返回0，失败返回-1
    if (remove(file_name) == 0) {
        printf("Remove file %s successfully.\n", file_name);
    } else {
        printf("Remove file %s failed.\n", file_name);
    }
}

void show_io() {
    // show_access();
    // show_chmod();
    show_remove_create_open_close();
}
