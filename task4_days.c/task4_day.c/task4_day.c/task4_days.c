#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int year, month, days;

    printf("请输入年份和月份: ");
    scanf("%d %d", &year, &month);

    /* 先判断月份是否合法 */
    if (month < 1 || month > 12)
    {
        printf("输入错误: 月份应在 1~12 之间\n");
    }
    else
    {
        switch (month)
        {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            /* 闰年: 能被4整除且不能被100整除, 或能被400整除 */
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            {
                days = 29;
            }
            else
            {
                days = 28;
            }
            break;
        }

        printf("%d 年 %d 月有 %d 天。\n", year, month, days);
    }

    return 0;
}
