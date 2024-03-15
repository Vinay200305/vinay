#include<stdio.h>
int main(){
	int no, i=1, sum=0;
	while(i<=10){
		printf("Enter number %d : ",i);
		scanf("%d",&no);
		sum = sum + no;
		i++;
	}
	printf("Sum = %d",sum);
	return 0;
}
