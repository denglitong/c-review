// 在 C 语言中凡是以 # 开头的均为预处理指令
// #include "stdio.h" 和 #include <stdio.h> 都是允许的，但是双引号和尖括号是有区别的：
//  #include <> 表示引入的文件在 INCLUDE_DIR 中去查找
//      （INCLUDE_DIR 是由系统的环境变量进行设置的，一般为系统头文件的默认存放目录，如 /usr/include 目录下）
//  #include "" 表示首先在当前的源文件目录中查找，若为找到 INCLUDE_DIR 去查找
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void printf_str();

void printf_num();

void putchar_exer();

void getchar_exer();

void printf_exer();

void scanf_exer();

void char_exer();

void operator_exer();

void sizeof_exer();

void circle_area_exer();

void digit_devide_exer();

void for_exer();

void digit_exchange();

void greatest_common_divisor();

void string_classification();

void sum_sn();

void sum_sn2();

void sum_3_list();

// 水仙花树
void print_daffodils_num();

void is_daffodils_num();

void completion_num();

void sum_fractional_list();

void calculate_distance();

void calculate_peach_count();

void calculate_square_root();

void prime_number();

void static_exer();

static int s_a = 5;

void print_reverse_order();

void unary_quadratic_equation();

void is_prime();

void exchange_array();

void reverse_line();

void concat_str();

void filter_vowel_letters();

void add_space_to_digit();

void letters_count();

void num_can_not_devide_by_8();

void intimate_number();

void simplest_fraction_list_of_denominator_40();

void to_lower_case();

void concat_reverse_str();

void nicoches_num();

void sort_nums();

void string_copy();

void array();

void selection_sort();

void sum_matrix_diagonal();

void insertion_sort();

void reverse_num();

void ten_digit_to_eight_digit();

void exchange_temperature();

void function_value();

void sum_even_values();

void sum_arithmetic_progression();

void count_neg_and_sum_pos();

void sum_factorial_sequence();

void show_var_address();

void show_pointer();

void show_struct();

void show_union();

void show_typedef();

void show_enum();

void str_cpy();

void student_score_summary();

void file_io();

void show_define();

void show_conditional_compile();

void bit_operators();

void left_shift_then_right_shift();

void cycle_shift();

void get_bits();

unsigned int move(unsigned int value, int n);

void show_move();

void show_and();

/**
 * C 程序 = 主函数 + m * 自定义函数 + n * 文件包含
 * m * n >= 0
 *
 * C 中一个重要的属性是每一个 C 表达式都有一个值，赋值表达式的值为等号的右值；
 * a = 2 * 5; 这个表达式的值为 10
 * C 语句 = C 表达式 + ;
 *
 * C 函数不能返回数组，也不支持数组赋值，更多的原因是 C 语言本身的特点需要贴合硬件，C 语句需要在几个机器指令内完成，所以
 * 不支持成百上千的数组的赋值操作；
 * 结构体 struct 是后来才加入 C语言的，一开始也是不支持结构体赋值的（结构体可包含多个字段犹如数组），但是因为结构体通常
 * 都比较小，所以做了一个权衡，在 C 语言中支持结构体赋值，也可以在函数中返回结构体
 *
 * 返回值类型 函数名(形参表说明) // 函数首部
 * {
 *  说明语句 // 函数体
 *  执行语句
 * }
 * 返回值类型: 不能是数组，也不能是函数，返回值类型可以缺省，默认为整型
 * 函数名: 函数名本身也有值，它代表了该函数的入口地址，使用指针调用函数时将用到此功能
 * 函数的定义只能有一次，而函数的声明可以有多次
 *
 * 变量是对程序中所占用空间的一种抽象定义，保存变量当前值的存储单元有 2 类：内存、CPU 的寄存器。
 * 变量的存储类型关系到变量的存储位置，C 语言中定义了 4 种属性：
 *  自动变量（auto）、
 *  外部变量（extern），即全局变量、
 *  静态变量（static）：变量存储于内存的全局静态区，仅会初始化一次
 *  寄存器变量（register）：
 *      只有局部自动变量和形参可以作为寄存器变量；
 *      寄存器数量有限，寄存器变量不能随便定义；
 *      不能对寄存器变量进行取址操作；
 *      寄存器变量是为了提高运算效率，编译器有时候会把 register 自动忽略掉，即 register 只是一个建议，
 *          建议编译系统把变量放到寄存器中，但是最终是否会生效取决于编译系统
 * ，变量在内存中的存放位置，由此决定了变量的保留时间和变量的作用范围
 *
 * 全局变量：在函数之外定义的变量，其作用范围为从定义处开始到本文件结束，编译时，编译系统为其分配固定的内存单元，在程序运行时
 * 的自始至终都占用固定单元。
 *
 * C 的设计哲学：C 充分相信程序员
 *
 * 指针: 类型说明符 *变量名，类型说明符表示该指针变量所指向的变量为何种数据类型，C 还提供使用 * 获取地址上对应的值
 *
 * 地址是逻辑内存空间中的一个编号，内存中的计量单位为 1 个字节(byte)，即 8比特(bit)，内存中的每个字节都有对应的一个编号
 *
 * 由于指针存放的都是地址，在 32 位操作系统下，任何类型的指针变量都占 4 个字节，
 * 同理，在 64 位操作系统下，任何类型的指针变量都占 4 个字节。
 *
 * C 语言规定，数组名代表数组的首地址，也就是第 0 号元素的地址
 *
 * 某个类型的指针 p 是个变量，可以改变 p 使它指向不同的地址，但不能改变 p 所指向的【常量】的值，
 * 和 数组指针 有着本质的区别，数组指针里面，指针指向的都是变量，所以可以通过数组指针修改某个下标的值。
 *
 * C 标准库函数可参考 https://en.cppreference.com/w/cpp/header，带示例
 * 或者可在 Linux 环境下使用 man method_name 来查看 C 函数库 文档
 *
 * @return
 */
int main() {
    // printf_str();
    // printf_num();
    // putchar_exer();
    // getchar_exer();
    // printf_exer();
    // scanf_exer();
    // char_exer();
    // operator_exer();
    // sizeof_exer();
    // circle_area_exer();
    // digit_devide_exer();
    // for_exer();
    // digit_exchange();
    // greatest_common_divisor();
    // string_classification();
    // sum_sn();
    // sum_sn2();
    // sum_3_list();
    // print_daffodils_num();
    // completion_num();
    // sum_fractional_list();
    // calculate_distance();
    // calculate_peach_count();
    // calculate_square_root();
    // prime_number();
    // for (int i = 0; i < 10; ++i) {
    //     static_exer();
    // }
    // print_reverse_order();
    // unary_quadratic_equation();
    // is_prime();
    // exchange_array();
    // reverse_line();
    // concat_str();
    // filter_vowel_letters();
    // add_space_to_digit();
    // letters_count();
    // is_daffodils_num();
    // num_can_not_devide_by_8();
    // intimate_number();
    // simplest_fraction_list_of_denominator_40();
    // to_lower_case();
    // concat_reverse_str();
    // nicoches_num();
    // sort_nums();
    // string_copy();
    // array();
    // selection_sort();
    // sum_matrix_diagonal();
    // insertion_sort();
    // reverse_num();
    // ten_digit_to_eight_digit();
    // exchange_temperature();
    // function_value();
    // sum_even_values();
    // sum_arithmetic_progression();
    // count_neg_and_sum_pos();
    // sum_factorial_sequence();
    // show_var_address();
    // show_pointer();
    // show_struct();
    // show_union();
    // show_typedef();
    // show_enum();
    // str_cpy();
    // student_score_summary();
    // file_io();
    // show_define();
    // bit_operators();
    // left_shift_then_right_shift();
    // cycle_shift();
    // get_bits();
    // show_move();
    show_and();
    return 0;
}

void printf_str() {
    /**
     * 标识符可使用的字符数量和 C 语言的不同实现有关；
     * C99 标准允许一个标识符最多可以有 63 个字符
     * C90 标准只允许最多可以有 31 个字符
     * 更旧的编译器通常最多只允许 8 个字符
     */
    int number;
    number = 2022;
    /**
     * \n 是转义字符，转义字符通常用于代表难于表达的或是无法键入的字符
     */
    printf("Hello! ");
    printf("I am dotcpp.com\n");
    printf("This year is %d\n", number);
}

void printf_num() {
    int a;
    printf("Please enter some num, enter Ctrl+D to terminate:");
    while (~scanf("%d", &a)) {
        printf("0%o %d 0x%x\n", a, a, a);
    }
}

void putchar_exer() {
    putchar('A');
    // 换行符是回车切换到行首，接下来的putchar字符接着行首继续输出
    putchar('\n');
    putchar(66);
}

void getchar_exer() {
    char c;
    printf("Please enter some char, enter Ctrl+D to terminate:");
    while (~(c = getchar())) {
        putchar(c);
    }
}

void printf_exer() {
    int a = 12;
    float b = 3.14159f;
    char c = 'A';

    printf("%d\n", a); // digit
    printf("%i\n", a); // integer
    printf("%U\n", a); // 以十进制输出无符号整数
    printf("%f\n", b);
    printf("%10.2f\n", b);
    printf("0%o\n", a); // 8-base digit
    printf("0x%x\n", a); // 16-base digit
    printf("%c\n", c);

    printf("%e\n", b);
    printf("%g\n", b);

    // * 修饰符在 printf() 中充当占位符（宽度值/精度值）
    unsigned width, precision;
    int number = 256;
    float weight = 25.5f;

    // mock input width, precision
    // scanf("%d", &width);
    // scanf("%d", &precision);
    width = 6;
    precision = 3;
    printf("number = %*d\n", width, number);
    printf("weight = %*.*f\n", width, precision, weight);

    printf("%10d\n", 10);
    printf("%10d\n", 1000);
    printf("%10d\n", 1000000);
    printf("%-10d%d\n", 10, 1);
    printf("%-10d%d\n", 1000, 1);
    printf("%-10d%d\n", 1000000, 1);
    // printf() 函数的返回值是所打印的字符的数目
}

// scanf() 输入格式函数：按照格式字符串的格式，从键盘上把数据输入到指定的变量之中
// 1) 格式说明符中，可指定数据的宽度，但不能指定数据的精度
// 2) 输入 long 类型数据必须使用 %ld, 输入 double 类型数据必须使用 %lf 或 %le
// 3) 附加格式说明符 "*" 使对应的输入数据不赋给相应的变量(即使函数跳过相应的输入项目)
// %s 把输入解释成一个字符串：输入的内容以第一个非空白字符作为开始，并且包含直到下一个空白字符的全部字符
// scanf() 函数返回成功读入的项目的个数，如果没有成功读取到输入的项目时返回 0，遇到 EOF 时返回 EOF 值，一般是 -1
void scanf_exer() {
    int num;
    printf("Please enter 3 number, seperated by empty blank:\n");
    scanf("%*d %*d %d", &num);
    printf("The last number is %d\n", num);
    int a, b;
    printf("Please input 2 digit, seperated by 1 char:\n");
    int c = scanf("%d%*c%d", &a, &b);
    printf("The input digit is %d %d, successful input count: %d\n", a, b, c);
}

// Sample input: China
// Sample output: Glmre
void char_exer() {
    char c[32];
    scanf("%s", c); // don't need &c

    char *p = c;
    while (*p) {
        printf("%c", *p + 4);
        p++;
    }
}

void operator_exer() {
    int a = 20, b = 5, c = 6;
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    // printf %% 输出一个 %
    printf("a %% c = %d\n", a % c);
}

void sizeof_exer() {
    // sizeof 是关键字，一元运算符，不是函数
    int n;
    int int_size = sizeof n;
    printf("int sizeof is %d bytes\n", int_size); // 64 bit-system: 4 bytes
}

void circle_area_exer() {
    float pi = 3.14159265358979323846f;
    float r;
    scanf("%f", &r);
    printf("%.2f", pi * r * r);
}

void digit_devide_exer() {
    int a;
    scanf("%d", &a);
    while (a > 0) {
        printf("%d", a % 10);
        a /= 10;
        if (a > 0) {
            printf(" ");
        }
    }
}

void for_exer() {
    for (int i = 0; i < 10; i++) {
        printf("count is %d\n", i);
    }
}

void digit_exchange() {
    int a;
    scanf("%d", &a);

    int b = a;
    int bits = 0;
    while (b > 0) {
        b /= 10;
        bits++;
    }
    printf("%d\n", bits);

    int c = a;
    while (c > 0) {
        int exp_v = (int) pow(10, --bits);
        int bit = c / exp_v;
        printf("%d", bit);
        c -= bit * exp_v;
        if (c > 0) {
            printf(" ");
        }
    }
    printf("\n");

    while (a > 0) {
        printf("%d", a % 10);
        a /= 10;
    }
}

// https://www.dotcpp.com/oj/problem1027.html
void greatest_common_divisor() {
    int a, b;
    scanf("%d %d", &a, &b);

    int a1[32], idx1 = 0, a_half = a / 2;
    a1[idx1++] = 1;
    for (int i = 2; i <= a_half; i++) {
        if (a % i == 0) {
            a1[idx1++] = i;
        }
    }
    a1[idx1++] = a;

    int a2[32], idx2 = 0, b_half = b / 2;
    a2[idx2++] = 1;
    for (int i = 2; i <= b_half; i++) {
        if (b % i == 0) {
            a2[idx2++] = i;
        }
    }
    a2[idx2++] = b;

    int greatestCommonDivisor = 1, i1 = idx1, i2 = idx2;
    while (i1 > 0 && i2 > 0) {
        while (a1[i1 - 1] > a2[i2 - 1]) {
            i1--;
            if (i1 <= 0) {
                break;
            }
        }
        if (a1[i1 - 1] == a2[i2 - 1]) {
            greatestCommonDivisor = a1[i1 - 1];
            break;
        }
        while (a2[i2 - 1] > a1[i1 - 1]) {
            i2--;
            if (i2 <= 0) {
                break;
            }
        }
    }

    // 最小公倍数 = 两数之积 / 最大公约数
    int leastCommonMultiple = a * b / greatestCommonDivisor;
    printf("%d %d", greatestCommonDivisor, leastCommonMultiple);
}

void string_classification() {
    char *line = NULL;
    size_t len = 0;
    size_t lineSize = 0;
    /**
     * ssize_t getline(
     *      // 指向存放该行字符的指针，如果是 NULL 则由系统帮助 malloc，需要在使用完成后 free 释放
     *      char **lineptr,
     *      // 如果是由系统 malloc 的指针，请填 0
     *      size_t *n,
     *      // 文件描述符
     *      FILE *stream);
     * 返回读取的字节数
     */
    lineSize = getline(&line, &len, stdin);
    // printf("You entered: %s, which has %zu chars.\n", line, lineSize - 1);
    int lettersSize = 0, digitsSize = 0, emptySpacesSize = 0, othersSize = 0;
    for (int i = 0; i < lineSize - 1; ++i) {
        if ((line[i] >= 'A' && line[i] <= 'Z') || (line[i] >= 'a' && line[i] <= 'z')) {
            lettersSize++;
        } else if (line[i] >= '0' && line[i] <= '9') {
            digitsSize++;
        } else if (line[i] == ' ') {
            emptySpacesSize++;
        } else {
            othersSize++;
        }
    }
    printf("%d %d %d %d", lettersSize, digitsSize, emptySpacesSize, othersSize);
}

void sum_sn() {
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int i = n; i > 0; --i) {
        sum += i * 2 * (int) pow(10, n - i);
    }
    printf("%d", sum);
}

void sum_sn2() {
    int n;
    scanf("%d", &n);
    long int a[21];
    a[0] = 0;
    a[1] = 1;
    for (long i = 2; i <= 20; ++i) {
        a[i] = i * a[i - 1];
    }
    long int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += a[i];
    }
    printf("%ld", sum);
}

void sum_3_list() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    // 等差数列: 1+2+3+...+n = (1+n)*n/2
    long double sum = (1 + a) * a / (double) 2;
    // 平方和数列公式: 1^2 + 2^2 + 3^2 + ... + n^2 = n(n+1)(2n+1)/6
    sum += (double) b * (b + 1) * (2 * b + 1) / 6;
    // 调和数列: 1/1 + 1/2 + 1/3 + 1/4 + ... + 1/n 没有一个简洁的求和公式
    for (int i = 1; i <= c; ++i) {
        sum += 1 / (double) i;
    }
    printf("%.2Lf", sum);
}

// 打印出所有"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该本身。 例如：153是一个水仙花数，因为153=1^3+5^3+3^3。
void print_daffodils_num() {
    for (int i = 100; i <= 999; ++i) {
        int j = i, sum = 0;
        while (j > 0) {
            sum += (int) pow(j % 10, 3);
            j /= 10;
        }
        if (sum == i) {
            printf("%d\n", i);
        }
    }
}

// 一个数如果恰好等于不包含它本身所有因子之和，这个数就称为"完数"。 例如，6的因子为1、2、3，而6=1+2+3，因此6是"完数"
void completion_num() {
    int n;
    scanf("%d", &n);
    // 没有大于 10000 的完数
    n = n > 10000 ? 10000 : n;
    for (int i = 6; i <= n; ++i) {
        int sum = 0, idx = 0, a[64];
        for (int j = 1; j <= i / 2; ++j) {
            if (i % j == 0) {
                a[idx++] = j;
                sum += j;
            }
        }
        if (sum == i) {
            printf("%d its factors are ", i);
            for (int j = 0; j < idx; ++j) {
                printf("%d", a[j]);
                if (j < idx - 1) {
                    printf(" ");
                } else {
                    printf("\n");
                }
            }
        }
    }
}

// 有一分数序列： 2/1 3/2 5/3 8/5 13/8 21/13...... 求出这个数列的前N项之和，保留两位小数。
void sum_fractional_list() {
    int n;
    scanf("%d", &n);

    int a[n + 2];
    a[0] = 1;
    a[1] = 2;
    for (int i = 2; i < n + 1; ++i) {
        a[i] = a[i - 1] + a[i - 2];
    }

    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += (double) a[i + 1] / a[i];
    }
    printf("%.2f", sum);
}

// https://www.dotcpp.com/oj/problem1019.html
void calculate_distance() {
    int m, n;
    scanf("%d %d", &m, &n);
    float a1 = m, a2 = (float) m / 2, q = (float) 1 / 2;
    float sum1 = a1 * (1 - pow(q, n)) / (1 - q);
    float sum2 = a2 * (1 - pow(q, n)) / (1 - q);
    float n_height = m * pow(2, -n);
    printf("%.2f %.2f", n_height, sum1 + sum2 - n_height);
}

// https://www.dotcpp.com/oj/problem1020.html
void calculate_peach_count() {
    int n;
    scanf("%d", &n);

    int a[n];
    a[0] = 1;
    for (int i = 1; i < n; ++i) {
        // An - 1/2 An - 1 = An-1
        // An = 2 * (An-1 + 1)
        a[i] = 2 * (a[i - 1] + 1);
    }
    printf("%d", a[n - 1]);
}

// https://www.dotcpp.com/oj/problem1021.html
void calculate_square_root() {
    int x;
    scanf("%d", &x);

    double a = x / 2.0f;
    double b = (a + x / a) / 2;

    while (fabs(b - a) >= 0.00001f) {
        a = b;
        b = (a + x / a) / 2;
    }
    printf("%.3f", a);
}

// https://www.dotcpp.com/oj/problem1022.html
void prime_number() {
    int n;
    scanf("%d", &n);

    for (int i = 2; i <= n; ++i) {
        int is_prime = 1;
        for (int j = 2; j <= sqrt(i); ++j) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        };
        if (is_prime) {
            printf("%d\n", i);
        }
    }
}

void static_exer() {
    s_a *= 2;
    printf("s_a = %d\n", s_a);
}

// https://www.dotcpp.com/oj/problem1026.html
void print_reverse_order() {
    int a[10];
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 9; i >= 0; --i) {
        printf("%d", a[i]);
        if (i > 0) {
            printf(" ");
        }
    }
}

// https://www.dotcpp.com/oj/problem1028.html
void unary_quadratic_equation() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double criterion = b * b - 4 * a * c;
    if (criterion > 0.0f) {
        printf("x1=%.3f x2=%.3f", -b + sqrt(criterion) / (2 * a), -b - sqrt(criterion) / (2 * a));
    } else if (criterion == 0.0f) {
        double factor = -b / (2 * a);
        printf("x1=%.3f x2=%.3f", factor, factor);
    } else {
        double factor1 = -b / (2 * a);
        double factor2 = sqrt(-criterion) / (2 * a);
        printf("x1=%.3f+%.3fi x2=%.3f-%.3fi", factor1, factor2, factor1, factor2);
    }
}

// https://www.dotcpp.com/oj/problem1028.html
void is_prime() {
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            printf("not prime");
            return;
        }
    }
    printf("prime");
}

// https://www.dotcpp.com/oj/problem1029.html
void exchange_array() {
    int a[3][3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d", a[j][i]);
            if (j < 2) {
                printf(" ");
            }
        }
        if (i < 2) {
            printf("\n");
        }
    }
}

// https://www.dotcpp.com/oj/problem1031.html
void reverse_line() {
    char line[256] = {' '};
    scanf("%s", line);

    int len = 0;
    while (line[len] != '\0') {
        len++;
    }

    for (int i = len - 1; i >= 0; --i) {
        if (line[i] == ' ') {
            continue;
        }
        printf("%c", line[i]);
    }
}

// https://www.dotcpp.com/oj/problem1032.html
void concat_str() {
    char line1[256], line2[256];
    scanf("%s", line1);
    scanf("%s", line2);

    int idx = 0;
    while (line1[idx] != '\0') {
        printf("%c", line1[idx]);
        idx++;
    }
    idx = 0;
    while (line2[idx] != '\0') {
        printf("%c", line2[idx]);
        idx++;
    }
}

// https://www.dotcpp.com/oj/problem1033.html
void filter_vowel_letters() {
    char line[256];
    scanf("%s", line);
    int idx = 0;
    while (line[idx] != '\0') {
        switch (line[idx]) {
            case 'A':
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case 'i':
            case 'O':
            case 'o':
            case 'U':
            case 'u':
                printf("%c", line[idx]);
                break;
        }
        idx++;
    }
}

// https://www.dotcpp.com/oj/problem1034.html
void add_space_to_digit() {
    // int digit_width = 4;
    // char c1 = getchar();
    // char c2 = getchar();
    // char c3 = getchar();
    // char c4 = getchar();
    // printf("%c %c %c %c", c1, c2, c3, c4);
    int n;
    scanf("%d", &n);
    int c[4], idx = 0;
    while (n > 0) {
        c[idx++] = n % 10;
        n /= 10;
    }
    for (int i = 0; i < 4; ++i) {
        printf("%d", c[3 - i]);
        if (i < 3) {
            printf(" ");
        }
    }
}

void letters_count() {
    char *line = NULL;
    size_t len = 0, line_size = 0;
    line_size = getline(&line, &len, stdin);

    int a = 0, b = 0, c = 0, d = 0;
    for (int i = 0; i < line_size - 1; ++i) {
        if ((line[i] >= 'A' && line[i] <= 'Z') || (line[i] >= 'a' && line[i] <= 'z')) {
            a++;
        } else if (line[i] >= '0' && line[i] <= '9') {
            b++;
        } else if (line[i] == ' ') {
            c++;
        } else {
            d++;
        }
    }

    printf("%d %d %d %d", a, b, c, d);
}

// https://www.dotcpp.com/oj/problem1119.html
void is_daffodils_num() {
    int n;
    scanf("%d", &n);
    int sum = 0, val = n;
    while (n > 0) {
        int b = n % 10;
        sum += b * b * b;
        n /= 10;
    }
    printf("%d", sum == val);
}

// https://www.dotcpp.com/oj/problem1121.html
void num_can_not_devide_by_8() {
    // x / 8 = y + 1
    // y / 8 = z + 1
    // z / 8 = a + 7
    // x / 17 = k + 4
    // k / 17 = 2a + 15

    // 17 * (17 * 2 * a + 15) + 4 = 8 * (8 * (8 * a + 7) + 1) + 1
    // 578a + 259 = 512a+457
    // a = 3
    int a = 3;
    int x = 578 * a + 259;
    printf("%d", x);
}

// https://www.dotcpp.com/oj/problem1122.html
void intimate_number() {
    int factors_a[64], factors_b[64];
    for (int a = 10; a <= 3000; ++a) {
        int idx1 = 0, idx2 = 0;
        for (int i = 2; i <= a / 2; ++i) {
            if (a % i == 0) {
                factors_a[idx1++] = i;
            }
        }
        int b = 1;
        for (int i = 0; i < idx1; ++i) {
            b += factors_a[i];
        }
        if (a >= b) {
            continue;
        }
        for (int i = 2; i <= b / 2; ++i) {
            if (b % i == 0) {
                factors_b[idx2++] = i;
            }
        }
        int sum = 1;
        for (int i = 0; i < idx2; ++i) {
            sum += factors_b[i];
        }
        if (sum == a) {
            printf("(%d,%d)", a, b);
        }
    }
}

// https://www.dotcpp.com/oj/problem1123.html
void simplest_fraction_list_of_denominator_40() {
    int factors_40[32], idx = 0;
    // 因数（注意此处不是质因数）
    for (int i = 2; i <= 20; ++i) {
        if (40 % i == 0) {
            factors_40[idx++] = i;
        }
    }

    printf("%d/40,", 1);
    for (int i = 3; i < 40; ++i) {
        if (40 % i == 0) {
            continue;
        }
        int factors_i[32], idx_i = 0;
        for (int j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                factors_i[idx_i++] = j;
            }
        }

        int has_common_factor = 0;
        for (int k = 0; has_common_factor == 0 && k < idx_i; ++k) {
            if (40 % factors_i[k] == 0) {
                has_common_factor = 1;
                break;
            }
            for (int j = 0; j < idx; ++j) {
                if (factors_i[k] == factors_40[j]) {
                    has_common_factor = 1;
                    break;
                }
            }
        }
        if (!has_common_factor) {
            printf("%d/40,", i);
        }
    }
}

// https://www.dotcpp.com/oj/problem1124.html
void to_lower_case() {
    // 实现 1
    // char c;
    // while ((scanf("%c", &c) != EOF)) {
    //     if (c >= 'A' && c <= 'Z') {
    //         printf("%c", c + ('a' - 'A'));
    //     } else {
    //         printf("%c", c);
    //     }
    // }

    // 解法 2
    char *line = NULL;
    size_t len = 0, line_size = 0;
    line_size = getline(&line, &len, stdin);
    // 此处需要包含 最后输入的 \n 回车字符...
    for (int i = 0; i < line_size; ++i) {
        if (line[i] >= 'A' && line[i] <= 'Z') {
            printf("%c", line[i] + ('a' - 'A'));
        } else {
            printf("%c", line[i]);
        }
    }
    printf("%d", line_size);
}

// https://www.dotcpp.com/oj/problem1126.html
void concat_reverse_str() {
    char line[50];
    scanf("%s", line);

    int idx = 0;
    while (line[idx] != '\0') {
        printf("%c", line[idx]);
        idx++;
    }
    idx--;
    for (int i = idx - 1; i >= 0; --i) {
        printf("%c", line[i]);
    }
}

// https://www.dotcpp.com/oj/problem1127.html
void nicoches_num() {
    int n;
    scanf("%d", &n);
    printf("%d*%d*%d=%d=", n, n, n, n * n * n);
    int a = n * n + 1 - n;
    printf("%d", a);
    for (int i = 1; i < n; ++i) {
        a += 2;
        printf("+%d", a);
    }
}

// https://www.dotcpp.com/oj/problem1129.html
void sort_nums() {
    int n = 10, a[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - 1; ++j) {
            if (a[j] < a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        printf("%d", a[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
}

void string_copy() {
    char str[20];
    char *str1 = "www.dotcpp.com";
    strcpy(str, str1);
    printf("%s\n", str1);
}

void array() {
    char c1[10];
    char c2[20] = {'a', 'e', 'i', 'o', 'u'};
    printf("%s %lu\n", c2, strlen(c2));
    char c3[] = {"china"};
    for (int i = 0; i < strlen(c3); ++i) {
        printf("%c ", c3[i]);
    }
    printf("\n");
    printf("c2(%s) == c3(%s) ? %d\n", c2, c3, strcmp(c2, c3));

    // c2 capacity must contain the c2 len + c3 len
    char *c4 = strcat(c2, c3);
    printf("c2 = %s\n", c2); // c2 = aeiouchina
    printf("c4 = %s\n", c4); // c4 = aeiouchina
}

// https://www.dotcpp.com/oj/problem1023.html
void selection_sort() {
    int n = 10, a[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; ++i) {
        int smallest = a[i], smallest_idx = i;
        for (int j = i + 1; j < n; ++j) {
            if (a[j] < smallest) {
                smallest = a[j];
                smallest_idx = j;
            }
        }
        if (smallest_idx != i) {
            a[smallest_idx] = a[i];
            a[i] = smallest;
        }
    }
    for (int i = 0; i < n; ++i) {
        printf("%d\n", a[i]);
    }
}

// https://www.dotcpp.com/oj/problem1024.html
void sum_matrix_diagonal() {
    int n = 3, matric[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &matric[i][j]);
        }
    }
    int a = 0, b = 0;
    for (int i = 0; i < n; ++i) {
        a += matric[i][i];
        b += matric[i][n - 1 - i];
    }
    printf("%d %d", a, b);
}

// https://www.dotcpp.com/oj/problem1025.html
void insertion_sort() {
    int n = 9, arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    int insert = 0, has_inserted = 0;
    scanf("%d", &insert);
    for (int i = 0; i < n; ++i) {
        if (has_inserted == 0 && insert < arr[i]) {
            printf("%d\n", insert);
            has_inserted = 1;
        }
        printf("%d\n", arr[i]);
    }
    if (insert >= arr[n - 1]) {
        printf("%d\n", insert);
    }
}

// https://www.dotcpp.com/oj/problem1026.html
void reverse_num() {
    int n = 10, arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; ++i) {
        printf("%d", arr[n - 1 - i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
}

// https://www.dotcpp.com/oj/problem1055.html
void ten_digit_to_eight_digit() {
    int n;
    scanf("%d", &n);
    printf("%o", n);
}

// https://www.dotcpp.com/oj/problem1056.html
void exchange_temperature() {
    double f;
    scanf("%lf", &f);
    double c = 5 * (f - 32) / 9;
    printf("%.2lf", c);
}

// https://www.dotcpp.com/oj/problem1057.html
void function_value() {
    double x;
    scanf("%lf", &x);
    if (x < 1) {
        printf("%.2lf", x);
    } else if (x >= 1 && x < 10) {
        printf("%.2lf", 2 * x - 1);
    } else {
        printf("%.2lf", 3 * x - 11);
    }
}

// https://www.dotcpp.com/oj/problem1058.html
void sum_even_values() {
    int n;
    scanf("%d", &n);
    int sum = 0, num = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            sum += num;
        }
    }
    printf("%d", sum);
}

// https://www.dotcpp.com/oj/problem1059.html
void sum_arithmetic_progression() {
    // an = 3n - 1
    int n;
    scanf("%d", &n);
    int a1 = 3 * 1 - 1, an = 3 * n - 1;
    int sum = (a1 + an) * n / 2;
    printf("%d", sum);
}

void count_neg_and_sum_pos() {
    int n = 20, num = 0, sum = 0, neg_count = 0, pos_count = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &num);
        if (num < 0) {
            neg_count++;
        } else if (num > 0) {
            sum += num;
            pos_count++;
        }
    }
    printf("%d\n%.2f", neg_count, (double) sum / pos_count);
}

// https://www.dotcpp.com/oj/problem1064.html
void sum_factorial_sequence() {
    double sum = 0, pre = 1;
    for (int i = 1; i <= 30; ++i) {
        pre = pre * i;
        sum += pre;
    }
    printf("%.2e", sum);
}

void show_var_address() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    char b[10] = {"clanguage"};
    for (int i = 0; i < 10; ++i) {
        printf("ox%x %d\n", &a[i], a[i]);
    }
    for (int i = 0; i < 10; ++i) {
        printf("ox%x %d\n", &b[i], b[i]);
    }
}

struct INFO {
    int num;
    char str[256];
};

struct Address {
    // 姓名
    char name[30];
    char street[40];
    unsigned long telephone;
    unsigned long zip;
};

void show_pointer() {
    int num = 1024;
    int *p = &num;
    printf("num Address = 0x%x, num = %d\n", p, num);
    printf("p sizeof %lu bytes\n", sizeof p); // 8 bytes

    struct INFO *p4;
    printf("p4 sizeof %lu bytes\n", sizeof p4); // 8 bytes

    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    printf("a[2] = %d\n", a[2]);
    printf("a[2] = %d\n", *(a + 2));
    int *p5 = a;
    printf("a[2] = %d\n", *(p5 + 2));
    int *p6 = &a[0];
    printf("a[2] = %d\n", *(p6 + 2));

    // 字符指针 str 是一个变量，可以改变 str 使它指向不同的字符串，但不能改变 str 所指向的常量区的内容
    // str 字符指针指向了一个常量字符串的首地址，常量字符串是不可以被更改的
    char *str = "www.dotcpp.com";
    // string 是一个数组，可以改变数组中保存的内容，这里需要注意和字符指针的区别
    char string[] = "www.dotcpp.com";
    // Exception: EXC_BAD_ACCESS (code=2, Address=0x10e81cee7)
    // str[0] = 'W'; // str 指向的是常量区的内容，不能修改常量区的内容
    printf("%c\n", *(str + 3));
    printf("%s\n", str);
    string[0] = 'W';
    printf("%s\n", string); // Www.dotcpp.com
    printf("str: ox%x\nstring: ox%x\n", str, string);

    // 这个定义其实是将 2 这个值赋给了 p7 这个变量，即 p7 对应的地址为 2，所以它的表现为 undefined
    int *p7 = {2, 1, 3};
    // Exception: EXC_BAD_ACCESS (code=1, Address=0x1)
    // p7[1] = 0;
    // Exception: EXC_BAD_ACCESS (code=1, Address=0x1)
    // printf("%d\n", p7[1]);
    // Exception: EXC_BAD_ACCESS (code=1, Address=0x1)
    // printf("%d\n", *(p7 + 1));
    printf("p7: ox%x\n", p7);
    int p8[3] = {1, 2, 3};
    int *p9 = p8;
    p9[1] = 0;
    printf("%d\n", p8[1]); // 0
    printf("p8: ox%x\np9: ox%x", p8, p9);
}

void show_struct() {
    struct INFO info;
    info.num = 2022;
    // Array type char[] is not assignable
    // the array contents are modifiable, but arrays themselves are not modifiable
    // The = operator cannot be used to copy the contents of one array to the other,
    // you must use a library function like strcpy or strcat for strings,
    // memcpy for non-strings(or assign array elements individually)
    // info.str = "Welcome to dotcpp.com";

    char welcome[] = {"Welcome to dotcpp.com"};
    // Ditto: Array type char[] is not assignable
    // info.str = welcome;
    // strcpy(info.str, welcome);
    // strcat(info.str, welcome);
    memcpy(info.str, welcome, sizeof(welcome));
    printf("This year is %d, %s\n", info.num, info.str);

    // struct arrays
    struct INFO students[] = {
            {1, "Litong"},
            {2, "Deng"},
    };
    for (int i = 0; i < sizeof(students) / sizeof(students[0]); ++i) {
        printf("student num: %d, student name: %s\n", students[i].num, students[i].str);
    }

    // struct pointer
    struct Address addr[3] = {
            {"Zhang", "Road NO.1", 111111, 4444},
            {"Wang",  "Road NO.2", 222222, 5555},
            {"Li",    "Road NO.3", 333333, 6666},
    };

    struct Address *p = &addr[0];
    // print first Address
    printf("%s %s %lu %lu\n", p->name, p->street, p->telephone, p->zip);
    // struct pointer move 1 step (move 1 struct sizeof bytes)
    p++;
    // print second Address
    printf("%s %s %lu %lu\n", p->name, p->street, p->telephone, p->zip);
    p++;
    // print third Address
    printf("%s %s %lu %lu\n", p->name, p->street, p->telephone, p->zip);
    // end of arrays
    p++;
    // undefined
    printf("%s %s %lu %lu\n", p->name, p->street, p->telephone, p->zip);

    p = &addr[0];
    for (int i = 0; i < 3; ++i) {
        printf("%s %s %lu %lu\n", p->name, p->street, p->telephone, p->zip);
        p++;
    }
}

union ABC {
    int a;
    char b;
    float c;
    float d;
};

/**
 * C 语言的 union 允许几种不同类型的变量存放到同一段内存单元中，union变量和成员变量的内存地址都是同一个地址；
 * union 在同一个时间只能存放一个成员，在对新的成员赋值的时候原有成员会被覆盖；
 *
 * 使用的时候不能直接引用 union 变量，而只能引用 union 变量中的成员；
 */
void show_union() {
    // 不能在定义union的时候对它进行初始化，也不能对 union 变量进行赋值
    // 不能把 union 当做函数参数，也不能是函数的返回体，但可以使用指向 union 的指针
    // union 可以出现在 struct 中，也可以定义 union array；
    // struct 也可以出现在 union 中，array也可以出现在 union 中；
    union ABC abc;
    abc.a = 1;
    abc.b = 'b';
    abc.c = 3.14f;
    abc.d = 2.13f;
    printf("a:%d\n", abc.a); // undefined
    printf("b:%c\n", abc.b); // undefined
    printf("c:%.2f\n", abc.c); // 2.13 由于指向的地址相同，且成员定义的类型相同，所以指向最新的赋值成员
    printf("d:%.2f\n", abc.d); // 2.13
}

// typedef 已定义类型 新类型;
// typedef 最常用的就是给 struct 重命名
// 许多windows开发中的许多我们未见过的数据类型，绝大部分都是通过typedef定义后的基本数据类型
typedef struct Address Addr;

void show_typedef() {
    Addr addr = {"Litong", "Road NO.3", 666666, 7777};
    printf("%s lives on %s, tel: %lu, zip: %ld\n", addr.name, addr.street, addr.telephone, addr.zip);

    // typedef 可以在函数内部使用
    typedef struct INFO _INFO;
    _INFO info = {18, "hello world"};
    printf("%d %s\n", info.num, info.str);
}


// enum 枚举名 {枚举元素A(0), 枚举元素B(1), 枚举元素C(2), ...}
// 枚举元素值是从 0 开始递增的，若想更改后续递增的值需要从某个值进行赋值开始
void show_enum() {
    enum Weekday {
        MON, TUE, WED, THU, FRI, SAT, SUN
    };
    // 0 1 2 3 4 5 6
    printf("%d %d %d %d %d %d %d\n", MON, TUE, WED, THU, FRI, SAT, SUN);
    enum Weekday A = WED;
    printf("A = %d\n", A);

    enum Month {
        Jan, Feb, Mar,
        Apr = 10, May, June,
        July = 20, Aug, Sep,
        Oct = 30, Nov, Dec
    };
    printf("Feb = %d, May = %d, Aug = %d, Nov = %d\n", Feb, May, Aug, Nov);
}

// https://www.dotcpp.com/oj/problem1048.html
void str_cpy() {
    typedef struct {
        int len;
        int offset;
        char *data;
    } Str;

    int n = 0, m = 0;
    scanf("%d", &n);
    char line[n];
    scanf("%s", line);
    scanf("%d", &m);

    Str str = {n, m, &line[0]};
    for (int i = str.offset - 1; i < str.len; ++i) {
        printf("%c", *(str.data + i));
    }
}

// https://www.dotcpp.com/oj/problem1051.html
void student_score_summary() {
    typedef struct {
        char *id;
        char *name;
        int score1;
        int score2;
        int score3;
    } Student;

    int n;
    scanf("%d", &n);
    Student students[n];
    printf("\n");

    for (int i = 0; i < n; ++i) {
        // 在堆上分配内存，然后被 Student 的引用带出去了，内存块持续存在，只是指向内存块的指针从 id,name 变为了 Student{id,name}；
        // 这里的 id,name 是 for 循环体在栈上分配的临时变量，如果不用 malloc 动态分配，那么由于循环体的局部性，下次循环时上次循环体内定义的
        // 临时变量就要失效，这里编译器为了加速，会复用第一次循环体定义的临时变量，所以会看到 id,name 在循环体内被复用同一个地址的现象。
        char *id = malloc(256);
        char *name = malloc(256);
        int score1, score2, score3;
        printf("id:ox%x,name:ox%x\n", id, name);
        scanf("%s", id);
        scanf("%s", name);
        scanf("%d", &score1);
        scanf("%d", &score2);
        scanf("%d", &score3);
        Student s = {id, name, score1, score2, score3};
        students[i] = s;
    }

    int sum1 = 0, sum2 = 0, sum3 = 0, largest_sum = 0, largest_idx = 0;
    for (int i = 0; i < n; ++i) {
        sum1 += students[i].score1;
        sum2 += students[i].score2;
        sum3 += students[i].score3;
        if (students[i].score1 + students[i].score2 + students[i].score3 > largest_sum) {
            largest_sum = students[i].score1 + students[i].score2 + students[i].score3;
            largest_idx = i;
        }
    }
    printf("%d %d %d\n", sum1 / n, sum2 / n, sum3 / n);
    printf("largest_idx: %d\n", largest_idx);
    printf("%s %s %d %d %d\n",
           students[largest_idx].id,
           students[largest_idx].name,
           students[largest_idx].score1,
           students[largest_idx].score2,
           students[largest_idx].score3);

    // malloc - free pair
    // C 为了极限性能不会加很多CPU 指令的读写屏障去做一些自动化的内存管理功能，不像 Java/Go 的运行时
    for (int i = 0; i < n; ++i) {
        free(students[i].id);
        free(students[i].name);
    }
}

/**
 * 磁盘文件、系统设备 都是文件，对于文件的操作分为 3 个步骤：
 * 1.打开文件 fopen 用来建立程序和文件的关系，获取文件在内存中的文件指针
 * 2.读写文件 fprintf, fsacnf, fwrite, fread, fputs, getss
 * 3.关闭文件 fclose 切断文件指针和文件的关联，避免误操作
 */
void file_io() {
    char file_name[] = "./demo_file.txt";
    FILE *fp = fopen(file_name, "w+");

    fprintf(fp, "%s", "www.dotcpp.com"); // ①
    fprintf(fp, "%c", ' '); // ②
    fprintf(fp, "%d", 1); // ③
    fprintf(fp, "%c", 'A'); // ④
    fprintf(fp, "%p", &file_name); // ⑤
    fclose(fp);

    fp = fopen(file_name, "r");
    char str[100];
    int i;
    char c;
    // 读入字符串，直到遇到第一个空格
    fscanf(fp, "%s", str); // ①
    printf("%s\n", str);

    fscanf(fp, "%c", &c); // ②
    // 输出一个空格
    printf("%c\n", c);

    fscanf(fp, "%d", &i); // ③
    printf("%d\n", i);

    fscanf(fp, "%c", &c); // ④
    printf("%c\n", c);

    fscanf(fp, "%p", &i); // ⑤
    printf("0x%x\n", i);
    // fclose(fp);

    char str1[] = "www.dotcpp.com";
    fp = fopen(file_name, "w+");
    fwrite(str1, strlen(str1), 1, fp);
    fclose(fp);

    // www.dotcpp.com sizeof: 15, strlen: 14
    // sizeof 统计内存里面分配的空间，包括字符串数组最后的 \0 字符
    // strlen 统计数组的个数，遇到 \0 或者 NULL 结束，统计的结果不包括 \0 或者 NULL 自身
    printf("%s sizeof: %lu, strlen: %lu\n", str1, sizeof str1, strlen(str1));

    fp = fopen(file_name, "r");
    char buffer[100];
    fread(buffer, sizeof(char), strlen(str1) / 2, fp);
    printf("%s\n", buffer);
    // 成功关闭则返回 0，失败则返回 -1
    fclose(fp);
}

// 常常对程序中反复使用的表达式进行宏定义
#define _PI 3.14159

#define M(y) y*y + y*3

#define MAX(a, b) a > b ? a : b

#define SWAP(a, b) a += b; b = a - b; a = a - b;

#define MOD(a, b) a % b

#define S(a, b, c) (a+b+c) / 2

#define AREA(a, b, c) sqrt(S(a,b,c) * (S(a,b,c)-a) * (S(a,b,c)-b) * (S(a,b,c)-c))

#define LEAP_YEAR(y) (y%100 != 0 && y%4 == 0) || (y%100 == 0 && y%400 == 0) || (y%3200 != 0 && y%172800 == 0)

double max2(double a, double b) {
    return a > b ? a : b;
}

double max3(double a, double b, double c) {
    return max2(max2(a, b), c);
}

#define MAX2(a, b) ((a) > (b) ? (a) : (b))

#define MAX3(a, b, c) MAX2(MAX2(a, b), c)

/**
 * 预处理指令 可以改变程序设计环境，提高编程效率，
 * 但它们并不是 C 语言本身的组成部分，不能直接对他们进行编译，必须在编译之前，对这些指令进行"预处理"。
 * C 语言提供的预处理功能：
 * 1.宏定义
 *      宏定义允许在 C 源程序中用一个标识符来标识一个字符串，这个标识符称为"宏名"；
 *      在预处理时会将所有的宏名都用宏定义的字符串去替换，这称为"宏代换"或"宏展开"；
 *      无参数的宏定义形式:
 *          #define 标识符 字符串;
 *      有参数的宏定义形式：
 *          #define 宏名(形参表) 字符串;
 * 2.文件包含
 * 3.条件编译
 *
 * 宏定义的本质是文本替换，需要警惕表达式的优先级问题！
 * 优先级是宏先展开，然后再计算表达式的值，此时需要特别注意带参数的宏的运算优先级！
 *
 *  可以通过添加()来规范运算的优先级问题。
 *  #define ADD(x) ((x)+(x))
 *  这样传入的 x 的运算优先级就是确定的了，不会有字符串替换之后引起的优先级的逻辑问题。
 */
void show_define() {
    printf("%.6f\n", _PI);
    printf("%d\n", M(3));
    printf("%d\n", MAX(10, 20));

    // https://www.dotcpp.com/oj/problem1036.html
    // int a = 0, b = 0;
    // scanf("%d", &a);
    // scanf("%d", &b);
    // SWAP(a, b);
    // printf("%d %d", a, b);

    // https://www.dotcpp.com/oj/problem1038.html
    // int a = 0, b = 0;
    // scanf("%d", &a);
    // scanf("%d", &b);
    // printf("%d", MOD(a, b));

    // https://www.dotcpp.com/oj/problem1038.html
    // float a, b, c;
    // scanf("%f", &a);
    // scanf("%f", &b);
    // scanf("%f", &c);
    // printf("%.3f", AREA(a, b, c));

    // https://www.dotcpp.com/oj/problem1039.html
    // int year;
    // scanf("%d", &year);
    // printf("%c", LEAP_YEAR(year) ? 'L' : 'N');

    // https://www.dotcpp.com/oj/problem1041.html
    double a, b, c;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    printf("%.3lf\n", max3(a, b, c));
    printf("%.3lf\n", MAX3(a, b, c));
}

/**
 * 条件编译可产生不同的目标代码文件，对程序的移植和调试是很有用的
 *
 * 1.如果定义了某个标识符：
 *  #ifdef 标识符
 *      程序段 1
 *  #else
 *      程序段 2
 *  #endif
 *
 * 2.如果没有定义某个标识符：
 *  #ifndef 标识符
 *      程序段 1
 *  #else
 *      程序段 2
 *  #endif
 *
 * 3.常量判别式
 *  #if 常量表达式
 *      程序段 1
 *  #else
 *      程序段 2
 *  #endif
 *
 *  其他预处理指令
 *
 * #error 指令强制编译程序停止编译，主要用于程序调试
 *  #error error-message
 *
 * #line 指令改变 __LINE__ 和 __FILE__ 的内容，主要用于调试和特殊应用；
 * __LINE__ 和 __FILE__ 都是编译程序中预定义的标识符，表示当前编译源文件的文件名和当前正在被编译的行
 *  #line line_number "filename"
 *  "filename" 是可选值
 *
 * #progma 是编译器定义的指令，它允许传入各种指令来控制编译器的行为，
 * 这些指令和参数是编译器已经设定好的，而不是我们可以自己定义的；
 * 示例：
 *  if (cameropen) {
 *      #pragma message("camera is open")
 *  }
 * 使用 #progma 预处理指令可提高 C 源程序的可移植性
 */
void show_conditional_compile() {

}

/**
 * 位运算是以数值的二进制为单位进行操作的，包含：
 *  << 左移   逻辑左移，最高位丢失，最低位补 0；
 *            算术左移，依次左移一位，尾部补 0，最高的符号位保持不变；
 *            循环左移，将最高位重新放置最低位；
 *  >> 右移   逻辑右移，最高位补 0，最低位丢失；
 *            算术右移，依次右移一位，符号位右移后，原位置上复制一个符号位；
 *            循环右移，将最低位重新放置最高位；
 *  ~  按位取反 NOT
 *  &  按位与  AND
 *  |  按位或  OR
 *  ^  按位异或 XOR
 */
void bit_operators() {
    int a = 13, b = 25;
    // 左移 N 位的本质是乘以 2 的 N 次方
    // 右移 N 位的本质是除以 2 的 N 次方
    printf("%d %d\n", a << 2, b >> 3);
}

#include <assert.h>
#include <limits.h>

#define TO_BASE_N (sizeof(unsigned)*CHAR_BIT + 1)

//                               v--compound literal--v
#define TO_BASE(x, b) my_to_base((char [TO_BASE_N]){""}, (x), (b))

// Tailor the details of the conversion function as needed
// This one does not display unneeded leading zeros
// Use return value, not `buf`
char *my_to_base(char buf[TO_BASE_N], unsigned i, int base) {
    assert(base >= 2 && base <= 36);
    char *s = &buf[TO_BASE_N - 1];
    *s = '\0';
    do {
        s--;
        *s = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[i % base];
        i /= base;
    } while (i);

    // Could employ memmove here to move the used buffer to the beginning
    // size_t len = &buf[TO_BASE_N] - s;
    // memmove(buf, s, len);

    return s;
}

// https://www.dotcpp.com/oj/problem1772.html
void left_shift_then_right_shift() {
    unsigned int a;
    scanf("%d", &a);
    size_t bits_len = 8 * sizeof(unsigned int);
    printf("%zu\n", bits_len);
    printf("%s\n", TO_BASE(a, 2));

    a = (a << (bits_len - 8));
    printf("%s\n", TO_BASE(a, 2));

    // C/C++ 中逻辑右移和算术右移共享同一个运算符 >>，编辑器决定使用逻辑右移还是算术右移，根据的是运算数的类型
    // 如果运算数类型是 unsigned 无符号型 则采用逻辑右移，
    // 如果运算符类型是 signed 有符号型 则采用算术右移；
    // 对于 signed 类型的数据，如果需要使用算数右移，或者 unsigned 类型的数据需要使用逻辑右移，都需要进行 类型转换
    a = a >> (bits_len - 4);
    printf("%s\n", TO_BASE(a, 2));

    printf("%u\n", a);
}

// https://www.dotcpp.com/oj/problem1773.html
void cycle_shift() {
    unsigned int a, n;
    scanf("%d", &a);
    scanf("%d", &n);

    while (n--) {
        if (a & 1) {
            a = (unsigned int) pow(2, 32 - 1) + (a >> 1);
        } else {
            a >>= 1;
        }
    }
    printf("%u\n", a);
}

// https://www.dotcpp.com/oj/problem1774.html
void get_bits() {
    unsigned int value, n1 = 0, n2 = 0;
    scanf("%u", &value);
    scanf("%u", &n1);
    scanf("%u", &n2);

    value <<= 32 - (n2 + 1);
    value >>= 32 - (n2 - n1 + 1);
    value <<= n1;
    printf("%u\n", value);
}

unsigned left_cycle_shift(unsigned value, unsigned n) {
    while (n--) {
        if (value & (1 << 31)) {
            value = (value << 1) + 1;
        } else {
            value = (value << 1);
        }
    }
    return value;
}

unsigned right_cycle_shift(unsigned value, unsigned n) {
    while (n--) {
        if (value & 1) {
            value = (value >> 1) + (1 << 31);
        } else {
            value = value >> 1;
        }
    }
    return 0;
}

unsigned int move(unsigned int value, int n) {
    if (n < 0) {
        return left_cycle_shift(value, -n);
    } else {
        return right_cycle_shift(value, n);
    }
    return 0;
}

// https://www.dotcpp.com/oj/problem1775.html
void show_move() {
    unsigned value;
    int n;
    scanf("%u", &value);
    scanf("%d", &n);
    printf("%u\n", move(value, n));
}

/**
 * 按位与 & 运算符的作用：
 *  1.清零
 *      对某一个数与 0 按位与运算，可起到清零的作用
 *  2.取指定位
 *      在某些存储场景下，"第 1~3 位表示xxx"，我们需要取出 1~3位，则可以让原数值与数字7进行按位与运算，
 *      得到的结果即为原数值的1~3位的值；
 *  3.判断奇偶
 *      数字的奇偶取决于二进制位的最低一位是 1 还是 0，因此只需要与 1 按位与运算，判断是 1 是 0 即可得知奇偶
 */
void show_and() {
    int a = 3 % 5;
    printf("%d\n", a);
    printf("%d\n", a & 1);

    printf("%s\n", TO_BASE(13, 2));
    printf("%s\n", TO_BASE(13 & 7, 2));
}
