#include <stdio.h>

int main(){


////  problem: 1. Write a program in C to read n number of values in an array and display them in reverse order.
//    int n;
//    printf("Input the number of elements to store in the array: ");
//    scanf("%d", &n);
//
//    int myArray[n];
//
//    for(int i = 0; i < n; i++){
//        printf("myArray[%d] : ", i);
//        scanf("%d", &myArray[i]);
//    }
//
//    printf("\n\nArray elements in reverse: \n");
//    for(int i = n - 1; i >= 0; i--){
//        printf("myArray[%d] = %d\n", i,myArray[i]);
//    }
//    printf("\n");







//    problem: 2.Write a program in C to count the total number of duplicate elements in an array and print both duplicate values and the unique values.
      int n, counter = 0;
      printf("Input the number to be stored in the array: ");
      scanf("%d", &n);

      int myArray[n];

      for(int i = 0; i < n; i++){
        printf("myArray[%d] : ", i);
        scanf("%d", &myArray[i]);
      }


      printf("\nArray : ");
      for(int i = 0; i < n; i++){
        printf("%d ", myArray[i]);
      }
      printf("\n");

      printf("\n");
      printf("duplicate values: ");
      for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(myArray[i] == myArray[j]){
                counter++;
                printf("%d ", myArray[i]);
                break;
            }
        }
      }

      printf("\n");
      printf("number of duplicate element : %d\n", counter);


    return 0;
}
