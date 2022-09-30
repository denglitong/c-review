//
// Created by Litong Deng on 2022/9/29.
//

#include "_string.h"

#include <printf.h>
#include <stdlib.h>
#include <string.h>

void show_strcpy() {
  char dst[20];
  char *src = "www.dotcpp.com";
  // dst 只能是字节数组，且长度要比 src 要大，否则会产生溢出错误
  // 字节数组才能被更改，字符串指针指向的是字符串常量，常量是不能修改的
  strcpy(dst, src);
  printf("dst: %s\n", dst);
}

void show_strcat() {
  char dst[20] = {"\0"};
  char *s1 = "www.";
  char s2[] = "dotcpp.";
  char s3[] = "com";
  strcat(dst, s1);
  strcat(dst, s2);
  strcat(dst, s3);
  printf("dst: %s\n", dst);
}

void show_strncat() {
  char dst[20] = {"I like "};
  char *src = "www.dotcpp.com";
  strncat(dst, src, 3);
  printf("dst: %s\n", dst);  // dst: I like www
}

void show_strncpy() {
  char dst[20] = {"I like "};
  char *src = "www.dotcpp.com";
  strncpy(dst, src, 3);
  printf("dst: %s\n", dst);  // dst: 'wwwike '
}

void show_string_compare() {
  char *buf1 = "aaa", *buf2 = "bbb";
  int ptr = strcmp(buf1, buf2);
  if (ptr > 0) {
    printf("%s > %s\n", buf1, buf2);
  } else if (ptr == 0) {
    printf("%s = %s\n", buf1, buf2);
  } else {
    printf("%s < %s\n", buf1, buf2);
  }
}

void show_strncmp() {
  char *buf1 = "aaa", *buf2 = "aaabbb";
  int ptr = strncmp(buf1, buf2, strlen(buf1));
  if (ptr > 0) {
    printf("%s > %s\n", buf1, buf2);
  } else if (ptr == 0) {
    printf("%s = %s\n", buf1, buf2);
  } else {
    printf("%s < %s\n", buf1, buf2);
  }
}

int min(int a, int b) { return a < b ? a : b; }

void show_string_compare_insensitive() {
  char *buf1 = "aaB", *buf2 = "AAb";
  int size1 = strlen(buf1), size2 = strlen(buf2);
  size_t size = min(size1, size2);
  int res = strncasecmp(buf1, buf2, size);

  if (res > 0) {
    printf("%s > %s", buf1, buf2);
  } else if (res < 0) {
    printf("%s < %s", buf1, buf2);
  } else {
    if (size1 > size2) {
      printf("%s > %s", buf1, buf2);
    } else if (size1 < size2) {
      printf("%s < %s", buf1, buf2);
    } else {
      printf("%s = %s", buf1, buf2);
    }
  }
}

void show_strchr() {
  char *str = "www.dotcpp.com";
  char key = 'c';
  char *ptr = strchr(str, key);
  if (ptr) {
    printf("'%c' find in '%s' at position: %ld\n", key, str, ptr - str);
  } else {
    printf("'%c' not found\n", key);
  }
}

void show_strpbrk() {
  char *str1 = "www.dotcpp.com";
  char *str2 = "cde";
  // 比较字符串str1和str2中是否有相同的字符，返回指向str1中第一个匹配的字符的指针，
  // 若查找失败，则返回NULL
  char *ptr = strpbrk(str1, str2);
  if (ptr) {
    printf("strpbrk found first common character: %c\n", *ptr);
  } else {
    printf("strpbrk didn't find common character in set\n");
  }
}

void show_strcspn() {
  char *str1 = "1234567890";
  char *str2 = "747DC8";
  // 返回字符串str1开头连续都不包含字符串str2内的字符数目
  int len = strcspn(str1, str2);
  printf("Character where strings intersect is at position %d\n", len);
}

void show_strcsp() {
  char *str1 = "1234567890";
  char *str2 = "1234DC8";
  // 返回字符串str1开头连续包含字符串str2内的字符数目
  int len = strspn(str1, str2);
  printf("Character where strings differ is at position %d\n", len);
}

void show_strdup() {
  char str[] = "www.dotcpp.com";
  char *ptr = strdup(str);
  printf("ptr: %s\n", ptr);
  free(ptr);
}

void show_strstr() {
  char *str1 = "I like www.dotcpp.com very much!";
  char *str2 = "www.dotcpp.com";
  // 查找子字符串在目标字符串中首次出现的位置
  char *ptr = strstr(str1, str2);
  printf("the substring is from position %d: %s\n", ptr - str1, ptr);
}

void show_strtok() {
  char input[50] = "I like|www.dotcpp.com very,much";
  char *separator = " |,";  // 分隔符的集合
  // 第一次分割返回第一个匹配的值
  char *p = strtok(input, separator);
  if (p) {
    printf("%s\n", p);
  }
  // 后续分割，传入 NULL 表示从上次隐式保存的位置继续分割，
  // 同时会修改input源字符串，所以源字符串只能是数组类型，不能是字符指针（指向的字符串常量不可修改）
  while (p = strtok(NULL, separator)) {
    printf("%s\n", p);
  }
}

void show_string() {
  // show_strcpy();
  // show_strcat();
  // show_strncat();
  // show_strncpy();
  // show_string_compare();
  // show_strncmp();
  // show_strchr();
  // show_strpbrk();
  // show_string_compare_insensitive();
  // show_strcspn();
  // show_strcsp();
  // show_strdup();
  // show_strstr();
  show_strtok();
}
