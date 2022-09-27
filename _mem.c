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
  char *p = memccpy(dst, src, ch, strlen(src));
  if (p) {
    *p = '\0';
    printf("Found '%c' in '%s' return '%s'\n", ch, src, dst);
  } else {
    printf("Can not found '%c' in '%s'\n", ch, src);
  }
}

void show_mem() { show_memccpy(); }
