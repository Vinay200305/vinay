#include<stdio.h>
int main (int arcg, char const*argv[])
{
    int salary;
    float ip,pp;
    printf("enter salary");
    scanf("%d", &salary);
    printf("enter the insurance premium percentage");
    scanf("%f", &pp);
    ip=salary*pp;
    printf("insurance premium salary=%f",ip);
    return 0;
}
