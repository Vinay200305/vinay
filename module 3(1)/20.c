#include<stdio.h>
int main(int argc, char const *argv[])
{
    int s,ip,lp;
        printf("enter monthly salary");
        scanf("%d",&s);
        ip=.1*s;
        lp-.1*s;
        s=s-ip-lp;
        printf("reamaining salary= %d",s);

    return 0;
}
