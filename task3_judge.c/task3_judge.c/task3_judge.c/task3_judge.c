#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;

    /* 第(1)小问：判断奇偶 */
    printf("请输入一个整数: ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("%d 是偶数\n", n);
    }
    else
    {
        printf("%d 是奇数\n", n);
    }

    /* 第(2)小问：比较大小 */
    int x, y;
    printf("请输入两个整数: ");
    scanf("%d %d", &x, &y);
    if (x > y)
    {
        printf("较大的数是: %d\n", x);
    }
    else if (x < y)
    {
        printf("较大的数是: %d\n", y);
    }
    else
    {
        printf("两个数相等\n");
    }

    return 0;
}
