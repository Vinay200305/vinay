#include<stdio.h>
int main(int argc, char const *argv[])
{
    int m,year;
    printf("enter month: ");
    scanf("%d",&m);
    if (m<=12)
    {
        if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
        {
            printf("days=31");
        }
        else if(m==2)
        {
            printf("enter year: ");
            scanf("%d", &year);
            if ((year%4)==0)
            {
                printf("days=29");
            }
            else
            {
                printf("days=28");
            }
        }
        else
        {
            printf("days=30");
        }
    }
    else
    {
        printf("enter valid input");
    }
    return 0;
}
