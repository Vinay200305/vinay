#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("enter 2 numbers");
    scanf("%d%d",&a,&b);
    /*
        c=a;
        a=b;
        b=c;

    */;
    a=a-b;
    b=a+b;
    a=b-a;

    printf("after swap number a=%d\nb=%d",a,b);

    return 0;

}
