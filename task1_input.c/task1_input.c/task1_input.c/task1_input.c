#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int age;
    double height;
    char blood;

    printf("请输入年龄：");
    scanf("%d", &age);
    printf("请输入身高(米)：");
    scanf("%lf", &height);
    printf("请输入血型：");
    scanf(" %c", &blood);

    printf("----------------\n");
    printf("|   个人信息卡   |\n");
    printf("----------------\n");
    printf("| 年龄：%d 岁     |\n", age);
    printf("| 身高：%.2f 米   |\n", height);
    printf("| 血型：%c 型     |\n", blood);
    printf("----------------\n");

    return 0;
}