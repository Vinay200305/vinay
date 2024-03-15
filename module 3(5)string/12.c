#include<stdio.h>
#include<string.h>
int main(){
	char s[50], w[50];
	int n, a[50], i, j, k=0, l, found=0, t=0;
	printf("Enter a string : ");
	gets(s);
	printf("Enter a word : ");
	gets(w);
	for(i=0; s[i]; i++){
		if(s[i]==' '){
			a[k++]=i;
		}
	}
	a[k++]=i;
	j=0;
	for(i=0; i<k; i++){
		n=a[i]-j;
		if(n==strlen(w)){
			t=0;
			for(l=0; w[l]; l++){
				if(s[l+j]==w[l]){
					t++;
				}
			}
			if(t==strlen(w)){
				found++;
			}
		}
		j=a[i]+1;
	}
	printf("total is word = %d",found);
	return 0;

//#include<stdio.h>
//int cmpSubStr(char str[], int s, char w[]){
//	int i;
//	for(i=0; w[i] != 0; i++){
//		if(str[s+i] != w[i]){
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int count(char str1[],char w1[]){
//	int c=0, slen=0, wlen=0, i;
//	while(str1[slen] != 0){
//		slen++;
//	}
//	while(w1[wlen] != 0){
//		wlen++;
//	}
//	for(i=0; i<=slen - wlen; i++){
//		if(cmpSubStr(str1, i, w1)){
//			c++;
//		}
//	}
//	return c;
//}
//
//int main(){
//	char ch1[50], sw[] = "is", ch2;
//	int total, index=0;
//	printf("Enter a string : ");
//	scanf("%[^\n]",&ch1);
//	//scanf("%s",&ch1);
////	while((ch2=getchar()) != '\n' && index < sizeof(ch1)-1){
////		ch1[index++] == ch2;
////	}
//	//ch1[index] = '\0';
//	total = count(ch1, sw);
//	printf("\nTotal is word = %d",total);
//	return 0;
//}
