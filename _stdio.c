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
  // 从流中读取下一个字符，失败、文件结束或出错时 返回 EOF
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

  stream = fopen(filename, "r");
  while ((ch = fgetc(stream)) != EOF) {
    putchar(ch);
  }
  putchar('\n');
}

void show_fgetc() {
  char ch;
  // printf("Enter a character followed by Enter:\n");
  // ch = getchar();
  // printf("The character getchar is: '%c'\n", ch);

  printf("Enter a character followed by Enter:\n");
  // obtains the next input character (if present) from the stream,
  // or the next character pushed back on the stream via ungetc()
  ch = fgetc(stdin);
  printf("The character fgetc is: '%c'\n", ch);
}

void show_fgetpos() {
  char *message = "This is a test";
  fpos_t filepos;
  FILE *stream = fopen("DUMMY.FIL", "w+");

  printf("Write: %s\n", message);
  fwrite(message, strlen(message), 1, stream);
  fgetpos(stream, &filepos);
  printf("The file pointer is at byte %ld\n", filepos);

  message = "hello";
  printf("Write: %s\n", message);
  fwrite(message, strlen(message), 1, stream);
  fgetpos(stream, &filepos);
  printf("The file pointer is at byte %ld\n", filepos);

  fclose(stream);
}

void show_stdio() {
  // show_clearerr();
  // show_fgetc();
  show_fgetpos();
}
