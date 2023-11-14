#include <stdio.h>

int main(){


//  problem: 1. Write a program in C to read n number of values in an array and display them in reverse order.
    int n;
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);

    int myArray[n];

    for(int i = 0; i < n; i++){
        printf("myArray[%d] : ", i);
        scanf("%d", &myArray[i]);
    }

    printf("\n\nArray elements in reverse: \n");
    for(int i = n - 1; i >= 0; i--){
        printf("myArray[%d] = %d\n", i,myArray[i]);
    }
    printf("\n");

    return 0;
}
