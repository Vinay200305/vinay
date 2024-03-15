#include<stdio.h>
int main(int argc, char const*argv[])
{
    int salary;
    printf("enter monthly salary:-");
    scanf("%d",&salary);
    salary*=12;
    printf("annual salary %d", salary);
    return 0;
}
