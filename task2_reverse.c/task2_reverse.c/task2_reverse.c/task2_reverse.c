#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAXN 1000

int main(void)
{
    int n;
    int a[MAXN];
    int i;
    int left, right, temp;

    printf("请输入整数个数：");
    if (scanf("%d", &n) != 1)
    {
        printf("输入错误：n 必须是正整数。\n");
        return 1;
    }

    if (n <= 0 || n > MAXN)
    {
        printf("输入错误：n 必须是正整数。\n");
        return 1;
    }

    printf("请输入 %d 个整数：", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    /* 原地逆序：首尾成对交换，只交换 n/2 次 */
    for (i = 0; i < n / 2; i++)
    {
        left = i;
        right = n - 1 - i;
        temp = a[left];
        a[left] = a[right];
        a[right] = temp;
    }

    printf("逆序后：");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if (i < n - 1)
        {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
