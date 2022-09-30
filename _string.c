//
// Created by Litong Deng on 2022/9/29.
//

#include "_string.h"

#include <printf.h>
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

void show_string() {
  // show_strcpy();
  // show_strcat();
  // show_string_compare();
  // show_strchr();
  // show_string_compare_insensitive();
  // show_strcspn();
  show_strcsp();
}
