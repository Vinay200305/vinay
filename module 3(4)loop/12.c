#include<stdio.h>
int main(){
	int no,a,count=0,temp,sum=0,i,power;
	printf("Enter a number : ");
	scanf("%d",&no);
	a=no;
	while(a!=0){
		a = a / 10;
		count++;
	}

	a=no;
	while(a!=0){
		temp=a%10;
		power = 1;
		for(i=0; i<count; i++){
			power = power * temp;
		}
		sum = sum + power;
		a = a / 10;
	}

	if(sum == no){
		printf("Number is armstromg");
	}
	else{
		printf("Number is not armstrong");
	}

	int n,c,a1=0,b;
	printf("Enter a number : ");
	scanf("%d",&n);
	c= n;
	a1=0;
	while(n>0){
		b = n % 10;
		a1 = (a1) + (b * b * b);
		n = n / 10;
	}
	if(c == a1){
		printf("It is armstrong number");
	}
	else{
		printf("It is not armstrong number");
	}
	return 0;
}
