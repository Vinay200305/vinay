#include <stdio.h>
int main() {
    int N,i;
    printf("Enter the table number: ");
    scanf("%d", &N);

    for (i = 1; i <= 10; i++) {
        printf("\n%d * %d = %d", N, i, N * i);
    }
    return 0;
}
