#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("enter temperature");
    scanf("%d", &a);
    if(a<0)
    {
        printf("freezing weather");
    }
    else if(a<10)
    {
        printf("very cold weather");
    }
    else if(a<20)
    {
        printf("cold weather");
    }
    else if(a<30)
    {
        printf("normal in temperature");
    }
    else if(a<40)
    {
        printf("its hot");
    }
    else
    {
        printf("its very hot");
    }
    return 0;
}
