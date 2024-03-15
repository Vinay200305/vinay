#include <stdio.h>
int max, i;
int findMax(int a[], int size){
	max = a[0];
	for(i=1; i<size; i++){
		if(a[i] > max){
			max = a[i];
		}
	}
	return max;
}

int main(){
	int n[50], sa, i, maximum;
	printf("Enter size of array : ");
	scanf("%d",&sa);
	printf("Enter the number : \n");
	for(i=0; i<sa; i++){
		scanf("%d",&n[i]);
	}
	maximum = findMax(n,sa);
	printf("\nMaximum number in the array is : %d",maximum);
	return 0;
}
