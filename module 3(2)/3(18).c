#include<Stdio.h>
int main(int argc, char const *argv[])
{
    int b,s,a;
    printf("enter buy value");
    scanf("%d",&b);
    printf("enter sell value");
    scanf("%d", &s);
    a=s-b;
    if (s>b)
    {
        printf("%d profit", a);
    }
    else
    {
        printf("%d loss", a);
    }
    return 0;
}
