// 预处理指令，甚至不是 C 语言的语句！
#include <stdio.h>

/**
 * C 程序 = 主函数 + m * 自定义函数 + n * 文件包含
 * m * n >= 0
 * @return
 */
int main() {
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
    return 0;
}