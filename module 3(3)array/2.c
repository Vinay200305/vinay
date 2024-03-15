#include <stdio.h>
int main() {
    int ch;
    float n1, n2, ans;

    printf("Enter 1 number = ");
    scanf("%f", &n1);

    printf("\nEnter 2 number = ");
    scanf("%f", &n2);

    printf("\nChoose operation.....");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\nEnter your choice = ");
    scanf("%d", &ch);

    switch (ch) {
        case 1:
            ans = n1 + n2;
            printf("\nAddition = %.2f", ans);
            break;
        case 2:
            ans = n1 - n2;
            printf("\nSubtraction = %.2f", ans);
            break;
        case 3:
            ans = n1 * n2;
            printf("\nMultiplication = %.2f", ans);
            break;
        case 4:
            if (n2 != 0) {
                ans = n1 / n2;
                printf("\nDivision = %.2f", ans);
            }
			else {
                printf("\nError! Division by zero is not allowed.");
            }
            break;
        default:
            printf("\nInvalid choice!");
    }
    return 0;
}
