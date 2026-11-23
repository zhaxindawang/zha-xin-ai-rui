#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAXM 100
#define MAXN 100

int main(void)
{
    int m, n;
    int a[MAXM][MAXN];
    int i, j;

    printf("请输入行数和列数：");
    if (scanf("%d %d", &m, &n) != 2)
    {
        printf("输入错误：行数和列数必须是正整数。\n");
        return 1;
    }

    if (m <= 0 || m > MAXM || n <= 0 || n > MAXN)
    {
        printf("输入错误：行数和列数必须是正整数。\n");
        return 1;
    }

    printf("请输入 %d 行 %d 列的数据：\n", m, n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    /* 转置后是 n 行 m 列：外层遍历列，内层遍历行 */
    printf("转置后：\n");
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < m; i++)
        {
            printf("%d", a[i][j]);
            if (i < m - 1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
