#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("chcp 65001");
    printf("%6s %-12s %10s\n", "ID", "Name", "Price");
    printf("------------------------------------\n");
    printf("%6d %-12s %10.2f\n", 1, "Pencil", 1.50);
    printf("%6d %-12s %10.2f\n", 2, "Notebook", 5.80);
    printf("%6d %-12s %10.2f\n", 3, "Eraser", 0.75);
    printf("%6d %-12s %10.2f\n", 4, "Compass", 12.60);
    return 0;
}