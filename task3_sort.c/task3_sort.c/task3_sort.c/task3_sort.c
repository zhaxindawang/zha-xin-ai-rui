#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAXN 1000

int main(void)
{
    int n;
    int a[MAXN];
    int i, j;
    int temp;

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

    /* 冒泡排序：升序，共 n-1 趟；每趟比较范围缩小为 n-1-i */
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("升序排序后：");
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
