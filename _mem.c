//
// Created by Litong Deng on 2022/9/27.
//

#include "_mem.h"

#include <stdio.h>
#include <string.h>

/**
 * void* memccpy(void *des, void *src, unsigned char c, unsigned m);
 * 从 src 中拷贝 m 个字节到 dst 中，遇到字符 c 便停止复制
 *  执行成功返回指向 des 中的第一个字符到字符 c 的指针，
 *  如果 src 的前 m 个字节中不存在 c 则返回 NULL
 */
void show_memccpy() {
  char src[] = "source";
  char dst[20], ch = 'r';
  char *ptr = memccpy(dst, src, ch, strlen(src));
  if (ptr) {
    *ptr = '\0';
    printf("Found '%c' in '%s' return '%s'\n", ch, src, dst);
  } else {
    printf("Can not found '%c' in '%s'\n", ch, src);
  }
}

/**
 * void* memchr(void *src, char c, unsigned m);
 * 在 src 的前 m 个字节中搜索字符 c，返回c第一次出现位置的指针
 */
void show_memchr() {
  char *src = "I love www.dotcpp.com";
  char ch = 'w';
  char *ptr = memchr(src, ch, strlen(src));
  if (ptr) {
    printf("Found '%c' in '%src' return '%s'\n", ch, src, ptr);
  } else {
    printf("Can not found '%c' in '%s'\n", ch, src);
  }
}

void show_memcmp() {
  char *s1 = "I love www.dotcpp.com!";
  char *s2 = "I like www.dotcpp.com!";
  int res = memcmp(s1, s2, strlen(s1));
  if (res < 0) {
    printf("s1 < s2");
  } else if (res == 0) {
    printf("s1 == s2");
  } else {
    printf("s1 > s2");
  }
}

void show_memcpy() {
  char dst[30] = {"0"};
  char *src = "I love www.dotcpp.com!";
  char *ptr = memcpy(dst, src, strlen(src));
  if (ptr) {
    printf("destination after memcpy: %s\n", dst);
  } else {
    printf("memcpy failed\n");
  }
}

void show_mem() {
  // show_memccpy();
  // show_memchr();
  // show_memcmp();
  show_memcpy();
}
