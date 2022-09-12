// 预处理指令，甚至不是 C 语言的语句！
#include <stdio.h>
#include <math.h>

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

/**
 * C 程序 = 主函数 + m * 自定义函数 + n * 文件包含
 * m * n >= 0
 *
 * C 中一个重要的属性是每一个 C 表达式都有一个值，赋值表达式的值为等号的右值；
 * a = 2 * 5; 这个表达式的值为 10
 * C 语句 = C 表达式 + ;
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
    digit_exchange();
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
