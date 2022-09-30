//
// Created by Litong Deng on 2022/9/30.
//

#include "_time.h"

#include <i386/limits.h>
#include <printf.h>
#include <time.h>
#include <unistd.h>

/**
 * 将给定的日历时间tm转换为以下固定的25个字符格式的文本表示形式：
 * DDD MMM dd  hh:mm:ss YYYY
    DDD    一星期的某一天,如Mon
    MMM    月份,如Jan
    dd     月中一天（1,2,……,31）
    hh     小时（1,2,……,24）
    mm     分钟（1,2,……,59）
    ss     秒数（1,2,……,59）
    YYYY   年+1900
    如果任何成员*time_ptr超出其正常范围，则行为是不确定的
    如果指示的time_ptr->tm_year日历年份超过4位或小于1000 年，则行为不明确。
    该函数不支持本地化，并且不能删除换行符。
 */
void show_asctime() {
  struct tm t;
  t.tm_isdst = 0;           // 不试行夏令时
  t.tm_year = 2022 - 1900;  // 自 1900.01.01:00:00:00 后的时间
  t.tm_mon = 8;             // 一年中的第几月，0-11
  t.tm_mday = 30;           // 1-31
  t.tm_wday = 5;            // 一周的第几天，从周日开始算，0-6
  t.tm_hour = 10;
  t.tm_min = 59;
  t.tm_sec = 46;
  char *str;
  str = asctime(&t);
  printf("%s\n", str);  // Fri Oct 30 10:59:46 2022
}

/**
 * 把日期和时间转换为字符串
 *  Www Mmm dd hh:mm:ss yyyy
    Www 表示星期几
    Mmm 是以字母表示的月
    dd 表示一月中的第几
    hh:mm:ss 表示时
    yyyy 表示年份
 */
void show_ctime() {
  time_t t;
  // 获取系统当前时间
  time(&t);
  t = time(NULL);
  t = time(0);
  char *str = ctime(&t);  // 将时间t转换为字符串
  printf("%s\n", str);    // Fri Sep 30 11:17:04 2022
}

void show_clock() {
  clock_t start, end;
  start = clock();  // 获取处理器时钟
  double a = 3.14;
  for (int i = 0; i < 1000; ++i) {
    a *= 2;
  }
  printf("a = %lf\n", a);
  // sleep(5);  // can not affect clock(), why?
  end = clock();
  printf("Time consumed: %lf\n", (end - start) * 1.0 / CLK_TCK);
}

void show_difftime() {
  time_t start, end;
  time(&start);
  sleep(3);
  time(&end);
  printf("Diff time: %f seconds\n", difftime(end, start));
}

void show_time() {
  show_asctime();
  show_ctime();
  // show_clock();
  show_difftime();
}
