#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAXN 1000

int main(void)
{
    int n;
    int a[MAXN];
    int i;
    int sum = 0;
    int maxVal, minVal;
    double avg;

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

    /* 最值初值取自 a[0]，而不是 0 */
    sum = 0;
    maxVal = a[0];
    minVal = a[0];
    for (i = 0; i < n; i++)
    {
        sum += a[i];
        if (a[i] > maxVal)
        {
            maxVal = a[i];
        }
        if (a[i] < minVal)
        {
            minVal = a[i];
        }
    }

    avg = (double)sum / n;

    printf("总和 = %d\n", sum);
    printf("平均值 = %.2f\n", avg);
    printf("最大值 = %d\n", maxVal);
    printf("最小值 = %d\n", minVal);

    return 0;
}
