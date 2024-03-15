#include <stdio.h>
int main() {
    int n, evenCount = 0, oddCount = 0, i = 0;
    while (i < 5) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &n);
        if (n % 2 == 0) {
            evenCount++;
        }
		else {
            oddCount++;
        }
        i++;
    }
    printf("\nTotal even numbers = %d", evenCount);
    printf("\nTotal odd numbers = %d", oddCount);

    return 0;
}
