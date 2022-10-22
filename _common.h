//
// Created by Litong Deng on 2022/10/9.
//

#ifndef C_REVIEW__COMMON_H
#define C_REVIEW__COMMON_H

#include <assert.h>
#include <limits.h>

#define TO_BASE_N (sizeof(unsigned) * CHAR_BIT + 1)

//                               v--compound literal--v
#define TO_BASE(x, b) my_to_base((char[TO_BASE_N]){""}, (x), (b))

// Tailor the details of the conversion function as needed
// This one does not display unneeded leading zeros
// Use return value, not `buf`
char *my_to_base(char buf[TO_BASE_N], unsigned i, int base);

#endif  // C_REVIEW__COMMON_H
