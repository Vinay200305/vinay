#include <stdio.h>
int main() {
    int n, fact, i, j;
    for (i=1; i<=5; i++) {
        printf("\n\nEnter %d number  = ", i);
        scanf("%d", &n);
        fact = 1;

        for (j=1; j<=n; j++) {
            fact = fact * j;
        }
        printf("Factorial of %d is = %d", n, fact);
    }
    return 0;
}
