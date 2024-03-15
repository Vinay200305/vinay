#include<stdio.h>
int main()
{
    int num1,num2,num3,largest;
    printf("enter 3 numbers : ");
    scanf("%d%d%d", &num1,&num2,&num3);

    //largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    else if (num1>=num2 && num1 >= num3)
        printf("num1 is largest");
    {
        if (num2 >= num1 && num2 >= num3)
            printf("num2 is largest");
    }
    else
    {
        printf("num3 is largest");
    }
    //printf("the largest number is : %d\n",largest);
    return 0;

}
