#include<stdio.h>
int main()
{
    char school[20];
    printf("enter school name");
    scanf("%s", &school);
    printf("abrivated school name:");
    printf("%C%C" , school [0], school[1]);
    return 0;

}
