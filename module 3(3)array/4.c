#include <stdio.h>
int fact(int n){
    if(n == 0 || n == 1){
        return 1;
    }
	else{
        return n * fact(n - 1);
    }
}

int main() {
    int no,f1;
    printf("Enter a number = ");
    scanf("%d", &no);

    if(no < 0){
        printf("\nEnter valid number");
    }
	else{
        f1 = fact(no);
        printf("\nFactorial = %d", f1);
    }
    return 0;
}
