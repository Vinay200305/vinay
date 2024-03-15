 #include<stdio.h>
 int main (int argc, char const *argv[])
 {
     int a,b;
     printf("enter two numbers: ");
     scanf("%d%d",&a,&b);
     if (a==b)
     {
         printf("the numbers are equal");
     }
     else
     {
         printf("the numbers are not equal");
     }
     return 0;
 }
