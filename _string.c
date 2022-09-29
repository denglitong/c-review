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

void show_string() {
  // show_strcpy();
  show_strcat();
}
