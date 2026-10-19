#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("chcp 65001");
    int age = 19;
    float height = 1.75f;
    double pi = 3.14159265358979;
    char bloodtype = 'A';

    printf("int age = %d;\n", age);
    printf("float height = %f;\n", height);
    printf("double pi = %lf;\n", pi);
    printf("char bloodtype = %c;\n", bloodtype);
    return 0;
}