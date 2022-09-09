// 预处理指令，甚至不是 C 语言的语句！
#include <stdio.h>

void printf_str();

void printf_num();

void putchar_exer();

void getchar_exer();

void printf_exer();

/**
 * C 程序 = 主函数 + m * 自定义函数 + n * 文件包含
 * m * n >= 0
 * @return
 */
int main() {
    printf_str();
    // printf_num();
    // putchar_exer();
    // getchar_exer();
    printf_exer();
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

    printf("%xe\n", b);
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

    // printf() 函数的返回值是所打印的字符的数目
}
