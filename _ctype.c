//
// Created by Litong Deng on 2022/9/25.
//

#include <printf.h>
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

void show_ctype() {
    show_isascii();
}
