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

  result = asin(x) * 180 / PI;
  printf("The arc sin of %lf is %lf\n", x, result);

  x = 1;
  result = atan(x) * 180 / PI;
  printf("The arc tan of %lf is %lf\n", x, result);

  x = 123.45;
  double down, up;
  down = floor(x);
  up = ceil(x);
  printf("original: %5.2lf, rounded down %5.2lf, rounded up %5.2lf\n", x, down,
         up);

  x = 4.0;
  result = exp(x);  // e的x次方
  printf("'e' raised to the power of %lf (e ^%lf) = %lf\n", x, x, result);

  x = -123.45;
  printf("number: %f absolute value: %f\n", x, fabs(x));

  long l = -12345678L;
  printf("number: %ld absolute value: %ld\n", l, labs(l));

  x = 2.0;
  double y = 3.0;
  printf("%lf raised to %lf is %lf\n", x, y, pow(x, y));

  x = 2.0;
  result = sqrt(x);
  printf("The square root of %lf is %lf\n", x, result);

  x = 30 * PI / 180;  //将 30° 角转换成弧度，1°=π/180°弧度
  result = sin(x);
  printf("The sin() of %lf is %lf\n", x, result);

  x = 60 * PI / 180;
  result = cos(x);
  printf("The cos() of %lf is %lf\n", x, result);

  x = 45 * PI / 180;
  result = tan(x);
  printf("The tan() of %lf is %lf\n", x, result);

  x = 800.6872;
  result = log10(x);  // 以 10 为底数
  printf("The common log of %lf is %lf\n", x, result);

  x = 8.6872;
  result = log(x);  // 以自然数 e 为底数
  printf("The natural log of %lf is %lf\n", x, result);

  double fraction, integer;
  x = 100000.567;
  fraction = modf(x, &integer);  // 小数部分 = modf(x, 整数部分的指针)
  printf("The whole and fractional parts of %lf are %lf and %lf\n", fraction,
         integer);

  x = 5.0, y = 2.0;
  result = fmod(x, y);
  printf("The remainder of (%lf / %lf) is %lf\n", x, y, result);

  // m = frexp(x, &e);
  // x = m * pow(2, e), m [0.5, 1)
  double mantissa;
  int exponent;
  x = 8.0;
  mantissa = frexp(x, &exponent);
  printf("%lf = %lf * (2 ^ %d)\n", x, mantissa, exponent);
}
