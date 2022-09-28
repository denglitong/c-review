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

void show_fgets() {
  char *filename = "1.txt";
  FILE *stream = fopen(filename, "w+");

  char str[] = "This is a test\nhello world";
  fwrite(str, strlen(str), 1, stream);
  fseek(stream, 0, SEEK_SET);

  char msg[20] = {"\0"};
  int size = strlen(str) + 1;
  /**
   * 从 stream 中读取 size-1 个字符，直到遇到换行符为止，读出的内容包含\n
   */
  fgets(msg, strlen(str) + 1, stream);
  printf("%s\n", msg);

  size = 8;
  fseek(stream, 0, SEEK_SET);
  // 执行成功返回所读出的字符串
  char *ptr = fgets(msg, size, stream);
  printf("%s\n", msg);
  // ptr == msg
  printf("%s\n", ptr);

  fclose(stream);
}

void show_fopen() {
  char *filename = "1.txt";
  FILE *stream = fopen(filename, "w+");
  if (!stream) {
    printf("Can not open file: %s\n", filename);
    return;
  }
  fputs("www.dotcpp.com!\n", stream);
  fclose(stream);
}

void show_fprintf() {
  char *input_name = "1.txt", *output_name = "2.txt";
  FILE *input = fopen(input_name, "r");
  FILE *output = fopen(output_name, "w");

  if (!input) {
    fprintf(stderr, "Cannot open input file: %s\n", input_name);
    return;
  }
  if (!output) {
    fprintf(stderr, "Cannot open output file: %s\n", output_name);
    fclose(input);
    input = NULL;
    return;
  }

  char ch;
  while ((ch = fgetc(input)) != EOF) {
    fprintf(output, "%c", ch);
  }

  fclose(input);
  input = NULL;
  fclose(output);
  output = NULL;
}

void show_fread() {
  char *filename = "1.txt";
  FILE *stream;
  if ((stream = fopen(filename, "w+")) == NULL) {
    fprintf(stderr, "Can not open file");
    return;
  }

  char msg[] = "Hello world, this year is 2022.";
  fwrite(msg, strlen(msg), 1, stream);

  char buf[20];
  fseek(stream, 0, SEEK_SET);
  fread(buf, strlen(msg) + 1, 1, stream);
  printf("Read: %s\n", buf);

  fclose(stream);
}

void show_freopen() {
  char *filename = "out.txt";
  if (freopen(filename, "w", stdout) == NULL) {
    fprintf(stderr, "error redirecting stdout to file\n");
    return;
  }
  // 原本要在控制台输出的字符串，输出到了文件中
  printf("1024\n");
  printf("hello world\n");
  printf("www.dotcpp.com\n");
  fclose(stdout);
}

void show_fscanf() {
  int i;
  printf("Input an integer: ");
  if (fscanf(stdin, "%d", &i)) {
    printf("Read integer: %d\n", i);
  } else {
    fprintf(stderr, "Error reading an integer from stdin.\n");
    exit(1);
  }

  char *filename = "out.txt";
  FILE *stream = fopen(filename, "r");
  fscanf(stream, "%d", &i);
  printf("Read file %s integer: %d\n", filename, i);

  char line[1024];
  // read line until the empty space
  // 执行成功返回转换和存储输入字段的个数，失败或遇到文件结束返回 EOF
  int len = fscanf(stream, "%s", line);
  printf("Read file %s string: %s\n", filename, line);
  printf("%d\n", len);

  len = fscanf(stream, "%s", line);
  printf("Read file %s string: %s\n", filename, line);
  printf("%d\n", len);

  len = fscanf(stream, "%s", line);
  printf("Read file %s string: %s\n", filename, line);
  printf("%d\n", len);
}

void show_fsetpos() {
  char *filename = "out.txt";
  FILE *stream = fopen(filename, "r");

  fpos_t filepos;
  fgetpos(stream, &filepos);

  filepos += 2;
  fsetpos(stream, &filepos);

  int i;
  fscanf(stream, "%d", &i);
  // 1024 -> pos+=2 -> 24
  printf("after fsetpos += 2 read integer: %d\n", i);

  // file position went through: 1024
  fgetpos(stream, &filepos);
  printf("file position: %lld\n", filepos);  // 4

  // 成功返回文件指针的位置，出错返回 -1L
  long pos_offset = ftell(stream);
  printf("ftell offset bytes: %ld\n", pos_offset);  // 4

  fclose(stream);
}

typedef struct {
  int i;
  char ch;
} MY_STRUCT;

void show_fwrite() {
  char *filename = "MY_STRUCT";
  FILE *stream = fopen(filename, "wb");
  if (!stream) {
    fprintf(stderr, "Can not open file.\n");
    exit(1);
  }

  MY_STRUCT s = {32, 'C'};
  if (fwrite(&s, sizeof(s), 1, stream) == 1) {
    printf("write to file: %s successful\n", filename);
  } else {
    printf("write to file: %s failed.\n", filename);
  }

  // 以十六进制查看文件内容: xxd MY_STRUCT
  fclose(stream);
}

void show_getc() {
  char ch;
  printf("Input a character: ");
  // 从标准获取一个字符，以回车结束
  ch = getc(stdin);
  printf("Input char: %c\n", ch);

  char *filename = "out.txt";
  FILE *stream = fopen(filename, "r");
  ch = getc(stream);
  printf("Read char '%c' from binary file: %s", ch, filename);
  fclose(stream);
}

void show_getchar() {
  char ch;
  // 从标准获取一个字符，以回车结束
  printf("Input a character: ");
  ch = getchar();
  printf("Input char from stdin: %c\n", ch);
}

void show_fgets_stdin() {
  char str[64];
  printf("Input a str:\n");
  fgets(str, sizeof(str) + 1, stdin);
  printf("The string input was:\n%s\n", str);
}

void show_getw() {
  char *filename = "test.txt";
  FILE *stream = fopen(filename, "w");
  int word = 94;
  // write binary format data, so we shall open with "wb" mode
  putw(word, stream);
  fclose(stream);

  stream = fopen(filename, "r");
  // read next word(int) from stream
  word = getw(stream);
  printf("Read word: %d from file: %s\n", word, filename);
}

void show_perror() {
  FILE *stream = fopen("perror.dat", "r");
  if (!stream) {
    // print system error message
    // Unable to open file for reading: No such file or directory
    perror("Unable to open file for reading");
  }
}

void show_putc() {
  char msg[] = "www.dotcpp.com\n";
  int i = 0;
  while (msg[i]) {
    putc(msg[i], stdout);
    // equal to putc(msg[i], stdout)
    putchar(msg[i]);
    i++;
  }
}

void show_puts() {
  char msg[] = "www.dotcpp.com\n";
  // print strig to stdout
  puts(msg);
}

void show_putw() {
  int word = 49;
  // return 0 for success, EOF for failures
  int res = putw(word, stdout);
  printf("\nThe return value is %d\n", res);
}

void show_remove() {
  char *filename = "test.txt";
  if (remove(filename) == 0) {
    printf("Removed %s.\n", filename);
  } else {
    perror("Remove file fail");
  }
}

void show_rename() {
  char *old_filename = "MY_STRUCT";
  char *new_filename = "MY_STRUCT_NEW";
  if (rename(old_filename, new_filename) == 0) {
    printf("Rename %s to %s.\n", old_filename, new_filename);
  } else {
    perror("Rename file fail.");
  }
}

void show_rewind() {
  char *filename = "out.txt";
  FILE *stream = fopen(filename, "r");

  fseek(stream, 0, SEEK_END);
  int first = ftell(stream);

  rewind(stream);
  int second = ftell(stream);

  printf("First pointer: %d, after rewind: %d\n", first, second);

  fclose(stream);
}

void show_stdio() {
  // show_clearerr();
  // show_fgetc();
  // show_fgetpos();
  // show_fgets();
  // show_fopen();
  // show_fprintf();
  // show_fread();
  // show_freopen();
  // show_fscanf();
  // show_fsetpos();
  // show_fwrite();
  // show_getc();
  // show_getchar();
  // show_fgets_stdin();
  // show_getw();
  // show_perror();
  // show_putc();
  // show_puts();
  // show_putw();
  // show_remove();
  // show_rename();
  show_rewind();
}
