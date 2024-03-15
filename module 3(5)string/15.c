#include<stdio.h>
#include<string.h>
int main(){
	int i, j, k, a, minIndex=0, maxIndex=0, max=0, min=0, len;
	char str1[50], substr[50][50], c;
	printf("Enter a string : ");
	gets(str1);
	while(str1[k] != 0){
		j=0;
		while(str1[k] != ' ' && str1[k] != 0){
			substr[i][j] = str1[k];
			k++;
			j++;
		}
		substr[i][j]=0;
		i++;
		if(str1[k] != 0){
			k++;
		}
	}

	len = i;
	max = strlen(substr[0]);
	min = strlen(substr[0]);
	for(i=0; i<len; i++){
		a=strlen(substr[i]);
		if(a>max){
			max = a;
			maxIndex = i;
		}
		if(a<min){
			min = a;
			minIndex = i;
		}
	}
	printf("\nlargest word is : %s",substr[maxIndex]);
	printf("\nSmallest word is : %s",substr[minIndex]);
}
