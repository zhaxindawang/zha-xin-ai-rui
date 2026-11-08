#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a, b;
    char op;

    printf("请输入算式(如 12 + 5): ");
    scanf("%d %c %d", &a, &op, &b);

    switch (op)
    {
    case '+':
        printf("%d %c %d = %d\n", a, op, b, a + b);
        break;
    case '-':
        printf("%d %c %d = %d\n", a, op, b, a - b);
        break;
    case '*':
        printf("%d %c %d = %d\n", a, op, b, a * b);
        break;
    case '/':
        if (b == 0)
        {
            printf("输入错误: 除数不能为 0\n");
        }
        else
        {
            printf("%d %c %d = %d\n", a, op, b, a / b);  /* 整数除法 */
        }
        break;
    default:
        printf("输入错误: 不支持的运算符\n");
        break;
    }

    return 0;
}
