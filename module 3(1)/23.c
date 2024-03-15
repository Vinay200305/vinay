#include<stdio.h>
int main (int argc, char const *argv[])
{
    int a,b;
    printf("enter first no:");
    scanf("%d ,&a");
    printf("enter second no:");
    scanf("%d",&b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("after swap %d %d", a,b);
    return 0;
}
