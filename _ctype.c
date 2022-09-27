//
// Created by Litong Deng on 2022/9/25.
//

#include "_ctype.h"

#include <ctype.h>
#include <stdio.h>

void show_isascii() {
  char ch;
  printf("Input a character: ");
  ch = getchar();
  if (isascii(ch)) {
    printf("%c is ascii.\n", ch);
  } else {
    printf("%c is not ascii.\n", ch);
  }
}

void show_isalnum() {
  char ch;
  printf("Input a character: ");
  scanf("%c", &ch);
  // [a-zA-Z0-9]
  if (isalnum(ch)) {
    printf("%c is alnum\n", ch);
  } else {
    printf("%c is not alnum\n", ch);
  }
}

void show_isalpha() {
  char ch;
  printf("Input a character: ");
  scanf("%c", &ch);
  // [a-zA-Z]
  if (isalpha(ch)) {
    printf("%c is alpha\n", ch);
  } else {
    printf("%c is not alpha\n", ch);
  }
}

void show_iscntrl() {
  char ch;
  printf("Input a character: ");
  scanf("%c", &ch);
  // is control character, not printable
  if (iscntrl(ch)) {
    // Del(10)
    printf("%c(%d) is control character.\n", ch, ch);
  } else {
    printf("%c(%d) is not control character.\n", ch, ch);
  }
}

void show_isdigit() {
  char ch;
  printf("Input a character: ");
  scanf("%c", &ch);
  // [0-9] 十进制字符
  if (isdigit(ch)) {
    printf("%c is digit.\n", ch);
  } else {
    printf("%c is not digit.\n", ch);
  }
}

void show_isxdigit() {
  char ch;
  printf("Input a character: ");
  scanf("%c", &ch);
  // [0-9A-Fa-f] 十六进制字符
  if (isxdigit(ch)) {
    printf("%c is hex digit.\n", ch);
  } else {
    printf("%c is not hex digit.\n", ch);
  }
}

void show_isgraph() {
  char ch;
  printf("Input a character: ");
  scanf("%c", &ch);
  // 判断 ch 是否是除了空格之外可打印的字符
  if (isgraph(ch)) {
    printf("%c is graph.\n", ch);
  } else {
    printf("%c is not graph.\n", ch);
  }
}

void show_islower() {
  char ch;
  printf("Input a character: ");
  scanf("%c", &ch);
  // [a-z]
  if (islower(ch)) {
    printf("%c is lower.\n", ch);
  } else {
    printf("%c is not lower.\n", ch);
  }
}

void show_isupper() {
  char ch;
  printf("Input a character: ");
  scanf("%c", &ch);
  // [A-Z]
  if (isupper(ch)) {
    printf("%c is upper.\n", ch);
  } else {
    printf("%c is not upper.\n", ch);
  }
}

void show_tolower() {
  char ch;
  printf("Input a character: ");
  scanf("%c", &ch);
  // [A-Z] -> [a-z]
  printf("transform %c to %c\n", ch, tolower(ch));
}

void show_toupper() {
  char ch;
  printf("Input a character: ");
  scanf("%c", &ch);
  // [a-z] -> [A-Z]
  printf("transform %c to %c\n", ch, toupper(ch));
}

void show_isprint() {
  char ch;
  printf("Input a character: ");
  scanf("%c", &ch);
  // is printable, including space
  if (isprint(ch)) {
    printf("%c is printable.\n", ch);
  } else {
    printf("%c is not printable.\n", ch);
  }
}

void show_ispunct() {
  char ch;
  printf("Input a character: ");
  scanf("%c", &ch);
  // 判断是否是标点符号
  if (ispunct(ch)) {
    // .,?;:'"/\|[]{}<>-_+=
    printf("%c is punct.\n", ch);
  } else {
    printf("%c is not punct.\n", ch);
  }
}

void show_isspace() {
  char ch;
  printf("Input a character: ");
  scanf("%c", &ch);
  if (isspace(ch)) {
    // space tab return
    printf("%c is space.\n", ch);
  } else {
    printf("%c is not space.\n", ch);
  }
}

void show_toascii() {
  int ch1;
  printf("Input a character: ");
  scanf("%d", &ch1);

  ch1 += 128;
  char ch2 = toascii(ch1);
  printf("transform %d to %c\n", ch1, ch2);
}

void show_ctype() {
  // show_isascii();
  // show_isalnum();
  // show_isalpha();
  // show_iscntrl();
  // show_isdigit();
  // show_isxdigit();
  // show_isgraph();
  // show_islower();
  // show_isupper();
  // show_tolower();
  show_toupper();
  // show_isprint();
  // show_ispunct();
  // show_isspace();
  // show_toascii();
}
