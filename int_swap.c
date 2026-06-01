#include <stdio.h>

static void int_swap(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;

    printf("The first value is now: %d\n", *num1);
    printf("The second value is now: %d\n", *num2);
}

int main() {
    int a;
    printf("Give me a number: ");
    scanf("%d", &a);

    int b;
    printf("Give me another number: ");
    scanf("%d", &b);

    printf("\nThe first value is: %d\n", a);
    printf("The second value is: %d\n", b);

    int_swap(&a, &b);

    return 0;
}