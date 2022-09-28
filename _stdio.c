//
// Created by Litong Deng on 2022/9/28.
//

#include "_stdio.h"

#include <stdio.h>

void show_clearerr() {
  char *filename = "1.txt";
  // 以只写方式打开，此时文件不可读
  FILE *stream = fopen(filename, "w");
  // 读取文件的一个字符
  char ch = fgetc(stream);
  // test the error indicator for the stream, returning non-zero if it's set
  if (ferror(stream)) {
    printf("Error reading from the file %s\n", filename);
    // clear the end-of-file and error indicators for the stream
    clearerr(stream);
  }
  if (feof(stream)) {
    printf("We have reached end-of-file\n");
  }
  // 关闭 stream, 刷新所有的缓冲区；成功返回 0，失败返回 EOF
  fclose(stream);
}

void show_stdio() { show_clearerr(); }
