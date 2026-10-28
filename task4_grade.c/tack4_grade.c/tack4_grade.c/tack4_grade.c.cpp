#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int score;

    printf("请输入分数: ");
    scanf("%d", &score);

    /* 先判断分数是否合法 */
    if (score < 0 || score > 100)
    {
        printf("输入错误: 分数应在 0~100 之间\n");
    }
    else
    {
        /* 多分支结构：if / else if / else */
        if (score >= 90)
        {
            printf("分数: %d, 等级: A\n", score);
        }
        else if (score >= 80)
        {
            printf("分数: %d, 等级: B\n", score);
        }
        else if (score >= 70)
        {
            printf("分数: %d, 等级: C\n", score);
        }
        else if (score >= 60)
        {
            printf("分数: %d, 等级: D\n", score);
        }
        else
        {
            printf("分数: %d, 等级: E\n", score);
        }
    }

    return 0;
}
