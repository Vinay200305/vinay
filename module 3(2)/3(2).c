#include<stdio.h>
int main ()
{
    int m;
    printf("enter number");
    scanf("%d", &m);
    if(m==0)
    {
        printf("0");
    }
        else if (m>1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    return 0;
}
