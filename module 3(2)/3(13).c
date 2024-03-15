#include<stdio.h>
int main()
{
    int num1,num2,num3,min;
    printf("enter 3 numbers : ");
    scanf("%d%d%d", &num1,&num2,&num3);

    min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);

    printf("the minimum number is: %d\n",min);
    return 0;
}
