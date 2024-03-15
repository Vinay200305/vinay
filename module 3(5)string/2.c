#include<stdio.h>
int main(){
	char ch[50],i;
	printf("Enter a string :");
	scanf("%s",&ch);

	printf("Individual characters from a string : \n");
	for(i=0; ch[i]!=0; i++){
		printf("%c\n",ch[i]);
	}
	return 0;
}
