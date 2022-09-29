//
// Created by Litong Deng on 2022/9/28.
//

#include "_stdlib.h"

#include <printf.h>
#include <stdlib.h>

void show_abort() {
  // Calling abort()
  // Signal: SIGABRT (signal SIGABRT)
  // Terminated due to signal 6
  printf("Calling abort()\n");
  // 异常终止程序
  abort();
}

// 定义了一个函数指针类型 Fun，其函数原型为 void()
typedef void (*Fun)();

void f1() { printf("exit first called\n"); }

void f2() { printf("exit second called\n"); }

// register a function to be called when exit
void show_atexit() {
  Fun fun1 = f1, fun2 = f2;
  atexit(f1);
  atexit(f2);
}

// 定义了一个函数指针类型 Function，其函数原型为 int *Function(int, int)
typedef int (*Function)(int, int);

int add(int a, int b) { return a + b; }

int multiple(int a, int b) { return a * b; }

void show_typedef_function() {
  Function f1 = add, f2 = multiple;
  printf("3 + 4 = %d\n", f1(3, 4));
  printf("3 * 4 = %d\n", f2(3, 4));
}

void show_atof() {
  char *s = "3.14159265";
  float f = atof(s);
  printf("float value: %.4f\n", f);
}

void show_atoi() {
  char *s = "512.13";
  int i = atoi(s);
  printf("int value: %d\n", i);
}

void show_atol() {
  char *s = "525713.14";
  long l = atol(s);
  printf("long value: %ld\n", l);
}

typedef int (*fc)(const void *, const void *);

int numcmp(const void *p1, const void *p2) {
  int *pi1 = (int *)p1;
  int *pi2 = (int *)p2;
  return (*pi1 - *pi2);
}

void show_bsearch() {
  int arr[] = {123, 456, 789, 654, 312, 714};
  int item_width = sizeof(int);
  int arr_len = sizeof(arr) / item_width;
  int key = 456;
  fc comparator = numcmp;
  int *ptr = bsearch(&key, arr, arr_len, item_width, comparator);
  if (ptr) {
    printf("%d is in the list.\n", *ptr);
  } else {
    printf("%d is not in the list.\n", key);
  }
}

void show_calloc() {
  int *ptr = calloc(1, sizeof(int));
  *ptr = 8;
  printf("address: 0x%x, value: %d\n", ptr, *ptr);
  free(ptr);
}

void show_div() {
  // 整数相除，返回包含商和余数的结构体
  div_t a = div(210, 25);
  printf("210 / 25 = %d remainder %d\n", a.quot, a.rem);
}

void show_ecvt() {
  char *str;
  int width = 10;   // 转换后str的位数宽度
  int pos_symbol;   // 正负标识，0 为正，1 为负
  int decimal_ptr;  // 一个指向返回值的小数点位置的指针，如 3
                    // 表示在返回值str中左起第 3 位是原来的小数点

  double f;

  f = 5.21;
  str = ecvt(f, width, &decimal_ptr, &pos_symbol);
  printf("string=%s decimal_ptr=%d pos_symbol=%d\n", str, decimal_ptr,
         pos_symbol);

  f = -103.23;
  str = ecvt(f, width, &decimal_ptr, &pos_symbol);
  printf("string=%s decimal_ptr=%d pos_symbol=%d\n", str, decimal_ptr,
         pos_symbol);

  f = 0.123;
  str = ecvt(f, width, &decimal_ptr, &pos_symbol);
  printf("string=%s decimal_ptr=%d pos_symbol=%d\n", str, decimal_ptr,
         pos_symbol);

  f = 4e5;
  str = ecvt(f, width, &decimal_ptr, &pos_symbol);
  printf("string=%s decimal_ptr=%d pos_symbol=%d\n", str, decimal_ptr,
         pos_symbol);

  f = -103.2314159265;
  str = ecvt(f, width, &decimal_ptr, &pos_symbol);
  printf("string=%s decimal_ptr=%d pos_symbol=%d\n", str, decimal_ptr,
         pos_symbol);
}

void show_stdlib() {
  // show_abort();
  // show_atexit();
  // show_typedef_function();
  // show_atof();
  // show_atoi();
  // show_atol();
  // show_bsearch();
  // show_calloc();
  // show_div();
  show_ecvt();
}
