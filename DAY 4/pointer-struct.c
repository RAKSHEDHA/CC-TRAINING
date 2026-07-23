#include<stdio.h>
typedef struct student
{
    int reg_no;
    char name[10];
    float cgpa;
}isa;
int main()
{
    isa a;
    scanf("%d %s %f",&a.reg_no, &a.name, &a.cgpa);
    printf("%d %s %f", a.reg_no, a.name, a.cgpa);
}