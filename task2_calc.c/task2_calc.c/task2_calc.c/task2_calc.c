#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a, b;

    printf("请输入两个整数: ");
    scanf("%d %d", &a, &b);

    printf("和 = %d\n", a + b);
    printf("差 = %d\n", a - b);
    printf("积 = %d\n", a * b);

    if (b == 0)
    {
        printf("除数不能为 0，无法计算商和余数\n");
    }
    else
    {
        printf("商 = %d\n", a / b);
        printf("余数 = %d\n", a % b);
    }

    return 0;
}
