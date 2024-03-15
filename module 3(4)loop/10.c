#include<stdio.h>
int main(){
	int no, fno, lno, sum;
	printf("Enter a number : ");
	scanf("%d",&no);

	lno = no % 10;
	while(no>=10){
		no = no / 10;
	}
	fno = no;
	sum = fno + lno;

	printf("\nsummation = %d",sum);
	return 0;
}
