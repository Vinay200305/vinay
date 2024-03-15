#include<Stdio.h>
int main(int argc, char const *argv[])
{
    char em1[12],em2[12],em3[12],em4[12],em5[12];
    int ems1,ems2,ems3,ems4,ems5,av,to;
    printf("enter employee name:-");
    scanf("%S", &em1);
    printf("enter employee salary:-");
    scanf("%d", &ems1);
    printf("enter employee name:-");
    scanf("%s", &em2);
    printf("enter employee salary:-");
    scanf("%d", &ems2);
    printf("enter employee name:-");
    scanf("%s", &em3);
    printf("enter employee salary:-");
    scanf("%d", &ems3);
    printf("enter employee name:-");
    scanf("%s", &em4 );
    printf("enter employee salary:-");
    scanf("%d", &ems4);
    printf("enter employee name:-");
    scanf("%s", &em5);
    printf("enter employee salary:-");
    scanf("%d", &ems5);
    to=ems1+ems2+ems3+ems4+ems5;
    av=to/5;
    printf("average salary=%d", av);
    printf("\n total salary=%d",to);
    return 0;
}
