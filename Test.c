#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter your number: ");
    scanf("%d", &a);
    printf("The table of %d is:\n", a);
    for (b = 1; b <= 10; b++)
    {
        printf("%d x %d = %d\n", a, b, a * b);
    }
    return 0;
}
// satya first
// 2nd edit