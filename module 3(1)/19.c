#include<stdio.h>
int main(int arcg, char const *argv[])
{
    int salary;
    printf("enter monthly salary");
    scanf("%d",&salary);
    salary=salary*(1+0.05/4)*4*3;
    printf("compound interest %d", salary);
    return 0;

}
