#include<stdio.h>
int main(int argc, char const *argv[])
{
    int p,r,t,a;
    printf("enter ammount");
    scanf("%d", &p);
    printf("enter interest rate");
    scanf("%D", &r);
    printf("enter time in year");
    scanf("%d", &t);
    a=p*(1 + r/100);
    printf("%d", a);
    return 0;

}
