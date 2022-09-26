//
// Created by Litong Deng on 2022/9/25.
//

#include <stdio.h>
#include <ctype.h>
#include "_ctype.h"

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
    // [0-9]
    if (isdigit(ch)) {
        printf("%c is digit.\n", ch);
    } else {
        printf("%c is not digit.\n", ch);
    }
}

void show_ctype() {
    // show_isascii();
    // show_isalnum();
    // show_isalpha();
    // show_iscntrl();
    show_isdigit();
}
