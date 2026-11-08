#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int choice;

    /* 先完整打印菜单 */
    printf("====== 成绩管理系统 ======\n");
    printf("1. 录入信息\n");
    printf("2. 查询成绩\n");
    printf("3. 修改成绩\n");
    printf("4. 退出系统\n");
    printf("==========================\n");
    printf("请输入你的选择: ");

    scanf("%d", &choice);

    /* 用 switch 对输入分类 */
    switch (choice)
    {
    case 1:
        printf("你选择了：录入信息\n");
        break;
    case 2:
        printf("你选择了：查询成绩\n");
        break;
    case 3:
        printf("你选择了：修改成绩\n");
        break;
    case 4:
        printf("你选择了：退出系统\n");
        printf("感谢使用，再见！\n");
        break;
    default:
        printf("输入无效，请输入 1~4 之间的数字\n");
        break;
    }

    return 0;
}
