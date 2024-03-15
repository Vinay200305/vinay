#include <stdio.h>
char replaceCase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch - ('a' - 'A');
    }
	else if(ch >= 'A' && ch <= 'Z'){
        return ch + ('a' - 'A');
    }
	else{
        return ch;
    }
}

int main() {
    char str1[100], ch;
    int i = 0, j;
    printf("Enter a string : ");
    while ((ch = getchar()) != '\n' && i < sizeof(str1) - 1) {
        str1[i++] = ch;
    }
    str1[i] = 0;
    for (j = 0; str1[j] != 0; j++) {
        str1[j] = replaceCase(str1[j]);
    }
    printf("\nReplace string : %s", str1);
    return 0;
}
