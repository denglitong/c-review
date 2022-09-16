// 预处理指令，甚至不是 C 语言的语句！
#include <stdio.h>
#include <math.h>
#include <string.h>

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
    insertion_sort();
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
