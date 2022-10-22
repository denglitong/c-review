//
// Created by Litong Deng on 2022/10/9.
//

#include "helper.h"

#include <printf.h>

#include "_common.h"

unsigned char seg(unsigned char i) { return 0x01 << i; }

#define DOT 10

/**
 * P0 = 0xff ^ digit_seg(i) shows number i in digital tube
 *
 *        0
 *   ............
 *   .          .
 * 5 .          .   1
 *   .    6     .
 *   ............
 *   .          .
 * 4 .          .   2
 *   .          .
 *   ............
 *        3
 *                  .   7
 */
unsigned char digit_seg(unsigned char i) {
  switch (i) {
    case 0:
      return seg(0) | seg(5) | seg(1) | seg(4) | seg(3) | seg(2);
    case 1:
      return seg(1) | seg(2);
    case 2:
      return seg(0) | seg(1) | seg(6) | seg(4) | seg(3);
    case 3:
      return seg(0) | seg(1) | seg(2) | seg(3) | seg(6);
    case 4:
      return seg(5) | seg(6) | seg(1) | seg(2);
    case 5:
      return seg(0) | seg(5) | seg(6) | seg(2) | seg(3);
    case 6:
      return seg(0) | seg(5) | seg(6) | seg(2) | seg(3) | seg(4);
    case 7:
      return seg(0) | seg(1) | seg(2);
    case 8:
      return seg(0) | seg(5) | seg(6) | seg(1) | seg(4) | seg(3) | seg(2);
    case 9:
      return seg(0) | seg(5) | seg(6) | seg(1) | seg(3) | seg(2);
    case DOT:
      // show .
      return seg(7);
    default:
      return 0x00;
  }
}

void run_helper() {
  for (int i = 0; i < 10; ++i) {
    printf("i = %d, digit_seg = 0b%s\n", i, TO_BASE(digit_seg(i), 2));
  }
  printf("hello world\n");
}
