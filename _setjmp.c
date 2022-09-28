//
// Created by Litong Deng on 2022/9/28.
//

#include "_setjmp.h"

#include <printf.h>
#include <setjmp.h>
#include <stdlib.h>

/**
 * jmp_buf 结构体，用于保存发生调用时的局部环境
 * The jmp_buf type is an array type suitable for storing information to restore
 * a calling environment. The stored information is sufficient to restore
 * execution at the correct block of the program and invocation of that block.
 * The state of floating-point status flags, or open files, or any other data is
 * not stored in an object of type jmp_buf.
 */
jmp_buf jumper;

void sub_routine() {
  int val = 1;
  // 跳转到保存 jmper 的 setjmp 函数中，并由 setjmp 函数返回 val
  longjmp(jumper, val);
}

/**
 * setjmp(xx) -> return 0 -> longjmp(xx, val) -> setjmp(xx) -> return val
 */
void show_setjmp_longjmp() {
  // 将当前系统堆栈信息保存在变量 jumper 中，并在程序中设置一个跳转点
  // 第一次直接调用，返回0；
  // 当用 longjmp 函数跳转到该跳转点时，返回 longjmp 函数第二个参数的值
  int tmp = 1024;
  // jumper 只是保存当前函数栈的跳转点，让 longjmp
  // 可以跳转回来，并不包含任何跳转前的数据栈的信息
  int value = setjmp(jumper);
  if (value != 0) {
    printf("longjmp with value %d\n", value);
    printf("tmp: %d\n", tmp);  // 2048
    exit(value);
  }
  tmp = 2048;
  printf("About to call subroutine...\n");
  sub_routine();
}
