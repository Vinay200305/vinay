#include<stdio.h>
int main(int argc, char const *argv[])
{
    int maths, physics, chemistry;
    printf("enter maths marks:");
    scanf("%d", &maths);
    printf("enter physics marks:");
    scanf("%d", &physics);
    printf("enter chemistry marks:");
    scanf("%d", &chemistry);

    if (maths>=65 && physics>=65 && chemistry>=50 && (maths+physics+chemistry)>=190 && (maths+physics)>=140)
        {printf("the candidate is eligible");}
    else
    {printf("the candidate is not eligible");}
    return 0;
}
