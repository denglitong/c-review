//
// Created by Litong Deng on 2022/9/28.
//

#include "_stdio.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

  char *message = "This is a test";
  fwrite(message, strlen(message), 1, stream);
  system("clear");  // 清屏

  printf("Press any key to flush %s:", filename);
  getchar();
  // 清除一个stream的缓冲区，使它仍然打开，并把输出流的缓冲区的内容写入它所关联的文件中
  fflush(stream);

  printf("File was flushed, press any key to quit:");
  getchar();

  // 关闭 stream, 刷新所有的缓冲区；成功返回 0，失败返回 EOF
  fclose(stream);
}

void show_stdio() { show_clearerr(); }
