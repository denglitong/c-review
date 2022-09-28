//
// Created by Litong Deng on 2022/9/27.
//

#include "_mem.h"

#include <stdio.h>
#include <string.h>
#include <strings.h>

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

void show_memmove() {
  char *src = "i like www.dotcpp.com";
  char dst[40] = {"I love WWW.DOTCPP.COM"};
  int len = 7;
  // replace dst[0, len] with src[0, len]
  char *ptr = memmove(dst, src, len);
  // ptr == dst
  printf("after memmove str: %s\n", dst);
}

void show_memset() {
  char src[] = {"I love www.dotcpp.com"};
  char c = '#';
  int len = 7;
  // replace each char in src[0,len] with c
  char *ptr = memset(src, c, 7);
  // ptr == src
  printf("str after memset: %s\n", ptr);
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

void show_strcmp() {
  char *s1 = "I LOVE WWW.DOTCPP.COM!";
  char *s2 = "I love www.dotcpp.com!";
  int t = strncmp(s1, s2, strlen(s1));
  if (t > 0) {
    printf("case sensitive compare : s1 > s2\n");
  } else if (t == 0) {
    printf("case sensitive compare: s1 = s2\n");
  } else {
    printf("case sensitive compare: s1 < s2\n");
  }
}

void show_strncasecmp() {
  char *s1 = "I LOVE WWW.DOTCPP.COM!";
  char *s2 = "I love www.dotcpp.com! Hello";
  // string compare, ignore case
  int t = strcasecmp(s1, s2);
  if (t > 0) {
    printf("case insensitive compare : s1 > s2\n");
  } else if (t == 0) {
    printf("case insensitive compare: s1 = s2\n");
  } else {
    printf("case insensitive compare: s1 < s2\n");
  }

  int size = strlen(s1);
  // string compare with len, ignore case
  t = strncasecmp(s1, s2, size);
  if (t > 0) {
    printf("case compare with %d bytes : s1 > s2\n", size);
  } else if (t == 0) {
    printf("case compare with %d bytes: s1 = s2\n", size);
  } else {
    printf("case compare with %d bytes: s1 < s2\n", size);
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
  // show_memmove();
  show_memset();
  // show_memchr();
  // show_memcmp();
  // show_strcmp();
  // show_strncasecmp();
  // show_memcpy();
}
