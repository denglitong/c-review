//
// Created by Litong Deng on 2022/9/26.
//

#include <stdio.h>
#include <sys/stat.h>
#include <sys/file.h>
#include <unistd.h>
#include <string.h>

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

void show_feof() {
    char *file_name = "./CMakeCache.txt";

    FILE *fp = fopen(file_name, "r");
    int ch = 0;
    while (!feof(fp)) {
        ch = getc(fp);
        printf("%c", ch);
    }
    printf("\n");
    if (feof(fp)) {
        printf("\nReached to the end of file.\n");
    }
    fclose(fp);
}

void show_fdopen() {
    char *file_name = "./test.txt";
    int fd = open(file_name, O_RDWR + O_CREAT);
    if (fd == -1) {
        printf("Can not open the file: %s\n", file_name);
        return;
    }

    chmod(file_name, S_IREAD + S_IWRITE + S_IEXEC);

    FILE *fp = fdopen(fd, "w");
    fprintf(fp, "www.dotcpp.com\n");
    fclose(fp);

    printf("fdopen works fine.\n");
}

void show_stat_file_size() {
    char *file_name = "./test.txt";
    struct stat st;
    stat(file_name, &st);
    int file_size = st.st_size;
    printf("file: %s size is: %d bytes\n", file_name, file_size);
}

void show_isatty() {
    // 获取标准输出设备的文件号
    int fd = fileno(stdout);
    // 判断是设备文件还是普通文件
    if (isatty(fd)) {
        printf("file descriptor %d is device\n", fd);
    } else {
        printf("file descriptor %d is normal file\n", fd);
    }

    char *file_name = "./test.txt";
    fd = open(file_name, S_IREAD);
    if (isatty(fd)) {
        printf("file: %s(%d) is device\n", file_name, fd);
    } else {
        printf("file: %s(%d) is normal file\n", file_name, fd);
    }
}

/**
 * int read(int handle, void *buf, int len)
 *  用于读取打开文件的内容，返回读取文件的长度
 *  int handle 为要读取的文件
 *  void *buf 读取内容的缓冲区
 *  int len 读取的长度，单位为 byte
 */
void show_read() {
    char *file_name = "./test.txt";
    int fd = open(file_name, O_RDONLY);
    if (fd == -1) {
        printf("Can not open the file: %s\n", file_name);
        return;
    }
    char buf[1024] = {'\0'};
    int len = read(fd, buf, 1024);
    printf("read len: %d, read buffer:\n%s\n", len, buf);
    close(fd);
}

/**
 * int lseek(int handle, long offset, long from_where);
 *  用以移动打开文件的指针
 *  int handle 为要操作的文件句柄
 *  long offset 要移动的偏移量
 *  long from_where 让文件指针以什么方向计算偏移量，有三个取值：
 *      SEEK_SET 文件的开头
 *      SEEK_CUR 文件的当前位置
 *      SEEK_END 文件的末尾
 */
void show_lseek() {
    char *file_name = "./test.txt";
    int fd = open(file_name, O_RDONLY);
    if (fd == -1) {
        printf("Can not open the file: %s\n", file_name);
        return;
    }

    int offset = 4;
    lseek(fd, offset, SEEK_SET);
    char buf1[20] = {'\0'};
    read(fd, buf1, 20);
    printf("file: %s after seek %d offset from starting content: %s\n",
           file_name, offset, buf1);

    offset = -4;
    char buf2[20] = {'\0'};
    lseek(fd, offset, SEEK_END);
    read(fd, buf2, 20);
    printf("file: %s after seek %d offset from end content: %s\n",
           file_name, offset, buf2);
}

/**
 * int tell(int handle);
 * 获取打开文件的指针位置，失败返回-1
 */
void show_ftell() {
    char *file_name = "./test.txt";
    FILE *fp = fopen(file_name, "r");
    int pos = ftell(fp);
    printf("file: %s current position: %d\n", file_name, pos);
    fseek(fp, 4, SEEK_SET);
    pos = ftell(fp);
    printf("after fseek 4 offset, file: %s current position: %d\n", file_name, pos);
    fclose(fp);
}

/**
 * int write(int handle, void *buf, int len);
 *  写入内容到文件，返回实际写入文件内容的长度
 */
void show_write() {
    char *file_name = "./test.txt";
    int fd = open(file_name, O_RDWR + O_CREAT);
    char buf_write[1024] = {"Hello!\nWelcome to www.dotcpp.com."};
    int len = write(fd, buf_write, strlen(buf_write));
    printf("Write to file: %s content len: %d\n", file_name, len);

    char buf_read[1024] = {'\0'};
    lseek(fd, 0, SEEK_SET);
    int len2 = read(fd, buf_read, 1024);
    printf("file content (%d bytes):\n%s\n", len2, buf_read);

    close(fd);
}

void show_io() {
    // show_access();
    // show_chmod();
    // show_remove_create_open_close();
    // show_feof();
    // show_fdopen();
    // show_stat_file_size();
    // show_isatty();
    // show_read();
    // show_lseek();
    // show_ftell();
    show_write();
}
