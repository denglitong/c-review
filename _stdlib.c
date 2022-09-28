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

void show_stdlib() {
  // show_abort();
  show_atexit();
}
