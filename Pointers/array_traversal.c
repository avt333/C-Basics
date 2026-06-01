#include <stdio.h>
#include <stdlib.h>

int main() {
    int arrSize;
    printf("Enter array size: ");
    scanf("%d", &arrSize);
    int array[arrSize];

    int bounds;
    printf("Enter upper limit value for random array values: ");
    scanf("%d", &bounds);
    srand(bounds);
    
    printf("The full array is shown below.\n");
    printf("[");
    for(int a = 0; a < arrSize; a++) {
        array[a] = rand() % bounds;
        if(a == arrSize - 1) {
            printf("%d", array[a]);
        } else {
            printf("%d, ", array[a]);
        }
    }
    printf("]\n");

    int index;
    printf("\nWhat index would you like to change? ");
    scanf("%d", &index);
    int newVal;
    printf("What value would you like to change it to?");
    scanf("%d", &newVal);
    array[index] = newVal;

    printf("The new array is shown below.\n");
    printf("[");
    for(int a = 0; a < arrSize; a++) {
        if(a == arrSize - 1) {
            printf("%d", array[a]);
        } else {
            printf("%d, ", array[a]);
        }
    }
    printf("]\n");
    return 0;
}