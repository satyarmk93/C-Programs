#include <stdio.h>

int main() {
    int a, b;

    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);
    int product = a * b;
    printf("Product of the two numbers: %d\n", product);
    return 0;
}
