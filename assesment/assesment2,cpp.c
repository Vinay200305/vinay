#include<stdio.h>
int no1,no2,c;
int menu() //show menu
{
    printf("---------------------menu---------------------");
    printf("\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n\n");
    printf("Enter your choice:");
    scanf("%d",&c); //get choice
}
int set()   //get values
{
    printf("\nenter first number:");
    scanf("%d",&no1);
    printf("enter second number:");
    scanf("%d",&no2);
    printf("\n");
}
int add(int no1,int no2)    //Addition number
{
    return no1+no2;
}

int sub(int no1,int no2)    //Subtraction   number
{
    return no1-no2;
}

int mul(int no1,int no2)    //Multiplication number
{
    return no1*no2;
}

int div(int no1,int no2)    //Division number
{
    return no1/no2;
}
int choice()
{

    switch (c)  //switch
    {
        case 1:
            printf("Addition = %d",add(no1,no2));
            printf("\n");
            break;
        case 2:
            printf("Substaction = %d",sub(no1,no2));
            printf("\n");
            break;
        case 3:
            printf("Multiplicattion = %d",mul(no1,no2));
            printf("\n");
            break;
        case 4:
            printf("Division = %d",div(no1,no2));
            printf("\n");
            break;
    }
}
int main(int argc, char const *argv[])
{
    do  //use mulitiple time value get
    {
        menu(); //call function show menu
            if(c==0 || c>=5)    //check condition choice invalid then exit program
            {
                printf("\nInvalid choice!!!!");
                printf("\n-----------------------------");
                goto exti;
            }
        set();  //call function values enter
        choice(); //call function choice
    } while (c!=0);
    exti:
    return 0;
}