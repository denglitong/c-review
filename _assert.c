//
// Created by Litong Deng on 2022/9/25.
//

#include <printf.h>
#include <assert.h>

#include "_assert.h"

/**
 * assert 是用来避免显而易见的错误的，而不是用来处理异常的；
 * 错误是不应该出现的，异常是不可避免的；
 * assert 一般在方法或者函数的最开始的地方使用，在一个功能执行过程中出现的问题几乎都是异常
 * @param num
 */
void show_asserts(int num) {
    // Assertion failed: (num > 50), function show_asserts, file _assert.c, line 17.
    // Signal: SIGABRT (hit program assert)
    // Terminated due to signal 6
    assert(num > 50);
    printf("Assert num(%d) is true\n", num);
}
