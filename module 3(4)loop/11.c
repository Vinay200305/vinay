#include <stdio.h>
int main() {
    char nm[5][50];
    int i;
    for (i=0; i<5; i++) {
        printf("Enter %d name = ", i + 1);
        scanf("%s", nm[i]);
    }
    for (i=0; i<5; i++) {
        printf("\n%s", nm[i]);
    }
    return 0;
}
