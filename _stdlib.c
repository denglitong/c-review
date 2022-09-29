//
// Created by Litong Deng on 2022/9/28.
//

#include "_stdlib.h"

#include <printf.h>
#include <search.h>
#include <stdlib.h>
#include <string.h>

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

// 二分搜索，找到则返回 key 对应的地址，否则返回 NULL
void show_bsearch() {
  int arr[] = {123, 456, 789, 654, 312, 714};
  size_t item_width = sizeof(int);
  size_t search_len = sizeof(arr) / item_width;
  int key = 456;
  fc comparator = numcmp;
  int *ptr = bsearch(&key, arr, search_len, item_width, comparator);
  if (ptr) {
    printf("%d is in the list.\n", *ptr);
  } else {
    printf("%d is not in the list.\n", key);
  }
}

// 线性搜索，找到则返回 key 对应的地址，否则返回 NULL
void show_lfind() {
  int arr[] = {123, 456, 789, 654, 312, 714};
  size_t item_width = sizeof(int);
  size_t search_len = sizeof(arr) / item_width;
  int key = 456;
  fc comparator = numcmp;
  int *ptr = lfind(&key, arr, &search_len, item_width, comparator);
  if (ptr) {
    printf("%d is in the list.\n", *ptr);
  } else {
    printf("%d is not in the list.\n", key);
  }
}

/**
 * 线性搜索，找到则返回 key 对应的地址，
 * 否则在末尾添加该 key 再返回新的地址，出错则返回 NULL
 */
void show_lsearch() {
  // 数组容量至少要比实际长度大 1，用来容纳可能新增的新元素
  int arr[7] = {123, 456, 789, 654, 312, 714};
  size_t item_width = sizeof(int);
  size_t search_len = 6;
  int key = 1000;
  fc comparator = numcmp;

  printf("search_len before search: %lu, arr[6]=%d\n", search_len, arr[6]);
  int *ptr = lsearch(&key, arr, &search_len, item_width, comparator);
  if (ptr) {
    printf("%d is in the list.\n", *ptr);
  } else {
    printf("%d is not in the list.\n", key);
  }
  printf("search_len after search: %lu, arr[6]=%d\n", search_len, arr[6]);

  for (int i = 0; i < 7; ++i) {
    printf("arr[%d]=%d ", i, arr[i]);
  }
  printf("\n");
}

void show_calloc() {
  int *ptr = calloc(1, sizeof(int));
  *ptr = 8;
  printf("address: 0x%x, value: %d\n", ptr, *ptr);
  free(ptr);
}

/**
 * The realloc() function tries to change the size of the allocation pointed
to by ptr to size, and returns ptr.  If there is not enough room to
enlarge the memory allocation pointed to by ptr, realloc() creates a new
allocation, copies as much of the old data pointed to by ptr as will fit
to the new allocation, frees the old allocation, and returns a pointer to
the allocated memory.  If ptr is NULL, realloc() is identical to a call
to malloc() for size bytes.  If size is zero and ptr is not NULL, a new,
minimum sized object is allocated and the original object is freed.  When
extending a region allocated with calloc(3), realloc(3) does not
guarantee that the additional memory is also zero-filled.
 */
void show_realloc() {
  int *i = malloc(sizeof(int));
  *i = 90;
  double *d = realloc(i, sizeof(double));
  // 在有足够的空间时，realloc()
  // 不会去申请另一个新的内存地址段，所以这里两个地址相同
  printf("original int pointer: ox%x\n", i);  // ox2798000
  printf("  new double pointer: ox%x\n", d);  // ox2798000
  printf("   int value: %d\n", *i);           // 90
  printf("double value: %lf\n", *d);          // 0.000000

  // 类似 union 的内存复用擦写技术，
  //  即在同一个内存段可以表示不同类型的值，但在某个时刻只有一种类型的值；
  // 此处 *d = 3.14 赋值后 i 即失效，所以获取值时表现为 undefined
  *d = 3.14;
  printf("original int pointer: ox%x\n", i);  // ox2798000
  printf("  new double pointer: ox%x\n", d);  // ox2798000
  printf("   int value: %d\n", *i);           // 1374389535 (undefined)
  printf("double value: %lf\n", *d);          // 3.140000
  free(d);
}

void show_malloc() {
  char *p = malloc(20);
  strcpy(p, "www.dotcpp.com");
  printf("string is %s\n", p);
  free(p);
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

void show_fcvt() {
  char *str;
  int decimal_width = 6;  // 小数点后面的位数宽度
  int pos_symbol;         // 正负标识，0 为正，1 为负
  int decimal_ptr;  // 一个指向返回值的小数点位置的指针，如 3
                    // 表示在返回值str中左起第 3 位是原来的小数点

  double f;

  f = 5.21;
  str = fcvt(f, decimal_width, &decimal_ptr, &pos_symbol);
  printf("string=%s decimal_ptr=%d pos_symbol=%d\n", str, decimal_ptr,
         pos_symbol);

  f = -103.23;
  str = fcvt(f, decimal_width, &decimal_ptr, &pos_symbol);
  printf("string=%s decimal_ptr=%d pos_symbol=%d\n", str, decimal_ptr,
         pos_symbol);

  f = 0.123;
  str = fcvt(f, decimal_width, &decimal_ptr, &pos_symbol);
  printf("string=%s decimal_ptr=%d pos_symbol=%d\n", str, decimal_ptr,
         pos_symbol);

  f = 4e5;
  str = fcvt(f, decimal_width, &decimal_ptr, &pos_symbol);
  printf("string=%s decimal_ptr=%d pos_symbol=%d\n", str, decimal_ptr,
         pos_symbol);

  f = -103.2314159265;
  str = fcvt(f, decimal_width, &decimal_ptr, &pos_symbol);
  printf("string=%s decimal_ptr=%d pos_symbol=%d\n", str, decimal_ptr,
         pos_symbol);
}

void show_gcvt() {
  char *str;
  int width = 10;  // 转换后str的位数宽度
  char buf[20] = {'\0'};
  double f;

  f = 5.21;
  str = gcvt(f, width, buf);
  printf("string=%s buf=%s\n", str, buf);

  f = -103.23;
  str = gcvt(f, width, buf);
  printf("string=%s buf=%s\n", str, buf);

  f = 0.123;
  str = gcvt(f, width, buf);
  printf("string=%s buf=%s\n", str, buf);

  f = 4e5;
  str = gcvt(f, width, buf);
  printf("string=%s buf=%s\n", str, buf);

  f = -103.2314159265;
  str = gcvt(f, width, buf);
  printf("string=%s buf=%s\n", str, buf);
}

void show_exit() {
  int a, status;
  do {
    printf("Input a order: 1--go    others--exit\n");
    scanf("%d", &a);
  } while (a == 1);

  printf("a = %d\n", a);
  exit(0);
  printf("this is not reachable\n");
}

void show_getenv() {
  // 返回给定的环境变量值，如未定义则返回 NULL
  char *s = getenv("USER");
  printf("USER: %s\n", s);
}

void show_putenv() {
  char *path, *ptr;
  int i = 0;
  ptr = getenv("PATH");

  path = malloc(strlen(ptr) + 5);
  strcpy(path, "PATH=");
  strcat(path, ptr);
  putenv(path);

  // predefined array in POSIX stand
  extern char **environ;

  while (environ[i]) {
    printf("%s\n", environ[i++]);
  }
}

void show_sprintf_cvt_int_to_str() {
  int i = 1725;
  char buf[10] = {"\0"};
  sprintf(buf, "%d", i);
  printf("%s\n", buf);
}

void show_ldiv() {
  ldiv_t lx = ldiv(165000L, 35500L);
  printf("165000 / 35500 = %ld remainder %ld\n", lx.quot, lx.rem);
}

void show_stdlib() {
  // show_abort();
  // show_atexit();
  // show_typedef_function();
  // show_atof();
  // show_atoi();
  // show_atol();
  // show_bsearch();
  // show_lfind();
  // show_lsearch();
  // show_calloc();
  // show_malloc();
  // show_realloc();
  // show_div();
  // show_ldiv();
  // show_ecvt();
  // show_fcvt();
  // show_exit();
  // show_gcvt();
  // show_getenv();
  show_putenv();
  // show_sprintf_cvt_int_to_str();
}
