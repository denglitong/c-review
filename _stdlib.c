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

void show_stdlib() {
  // show_abort();
  // show_atexit();
  // show_typedef_function();
  // show_atof();
  // show_atoi();
  show_atol();
}
