#include<stdio.h>
int main(){
	char fstr[30], sstr[30];
	int i, j;
	printf("First string : ");
	scanf("%s", fstr);
	printf("Second string : ");
	scanf("%s", sstr);
	for(i=0; fstr[i] != 0; i++){
	}
	for(j=0; sstr[j] != 0; j++){
		fstr[i] = sstr[j];
		i++;
	}
	fstr[i] = 0;
	printf("combine string : %s",fstr);
	return 0;
}
