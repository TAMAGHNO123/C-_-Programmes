
#include <stdio.h>
#include <string.h>

int sumOfDigits(char str[]) {
    int sum = 0;
    for (int i = 0; i < strlen(str); i++) {
        sum += str[i] - '0';
    }
    return sum;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Sum of digits of string: %d\n", sumOfDigits(str));
    return 0;
}

