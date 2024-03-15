#include<stdio.h>
int main(){
	int no,i,fact=1;
	printf("Enter a number : ");
	scanf("%d",&no);
	i=no;
	while(i>=1){
		fact = fact * i;
		i--;
	}
	printf("Factorial = %d",fact);
	return 0;
}
