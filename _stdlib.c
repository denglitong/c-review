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

void show_stdlib() { show_abort(); }
