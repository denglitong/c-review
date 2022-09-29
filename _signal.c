//
// Created by Litong Deng on 2022/9/29.
//

#include "_signal.h"

#include <printf.h>
#include <signal.h>

/**
 * SIGABRT (Signal Abort) 程序异常终止。
 * SIGFPE (Signal Floating-Point Exception)
 *  算术运算出错，如除数为0或溢出（不一定是浮点运算）。
 * SIGILL (Signal Illegal Instruction)
 *  非法函数映象，如非法指令，通常是由于代码中的某个变体或者尝试执行数据导致的。
 * SIGINT (Signal Interrupt) 中断信号，如 ctrl-C，通常由用户生成。
 * SIGSEGV (Signal Segmentation Violation)
 *  非法访问存储器，如访问不存在的内存单元。
 *  SIGTERM (Signal Terminate) 发送给本程序的终止请求信号。
 */
void show_signal() {
  /**
   * send a signal to the current thread
   */
  int a, b;
  printf("Input 2 integers:\n");
  scanf("%d %d", &a, &b);
  if (b == 0) {
    // 1 0
    // Signal: SIGFPE (signal SIGFPE)
    // Terminated due to signal 8
    raise(SIGFPE);
  }
  float c = (float)a / b;
  printf("%d / %d = %f", a, b, c);

  raise(SIGTERM);
  printf("Unreachable line");
}
