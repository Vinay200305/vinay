#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d", &num);
    (num % 2==0) ? printf("\nnumber is an even") : printf("\nnumber is an odd");
    return 0;
}
