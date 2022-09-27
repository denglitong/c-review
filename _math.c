//
// Created by Litong Deng on 2022/9/27.
//

#include "_math.h"

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159265

void show_math() {
  int number = -123;
  printf("number: %d absolute value: %d\n", number, abs(number));

  // x 的取值范围为 [-1,1]，超出将产生域错误（domain error），此时返回值为
  // NAN（Non A Number）
  double result = 0, x = 0.5;
  result = acos(x) * 180 / PI;
  printf("The arc cosine of %lf is %lf\n", x, result);
}
