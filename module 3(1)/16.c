#include<stdio.h>
int main()
{
    char country[20];
    printf("enter country name");
    scanf("%s", &country);
    printf("abbreviated country name:");
    printf("%c%c",country[0], country[1]);
    return 0;
}
