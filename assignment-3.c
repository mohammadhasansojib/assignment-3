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
//      int n, counter = 0;
//      printf("Input the number to be stored in the array: ");
//      scanf("%d", &n);
//
//      int myArray[n];
//
//      for(int i = 0; i < n; i++){
//        printf("myArray[%d] : ", i);
//        scanf("%d", &myArray[i]);
//      }
//
//      printf("\nArray: ");
//      for(int i = 0; i < n; i++){
//        printf("%d ", myArray[i]);
//      }
//
//
//
//      printf("\n");
//      printf("duplicate elements: ");
//      for(int i = 0; i < n; i++){
//        for(int j = i + 1; j < n; j++){
//            if(myArray[i] == myArray[j]){
//                printf("%d ", myArray[i]);
//                counter++;
//                break;
//            }
//            if(myArray[i] != myArray[j]){
//
//            }
//        }
//      }
//
//      printf("\n\nTotal number of duplicate elements found in the array  is: %d\n", counter);
//
//      printf("\n");








//  problem 3: Write a program in C to find the maximum and minimum elements in an array.
//    int n, min,max;
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
//    printf("\n\nArrays are: ");
//    for(int i = 0; i < n; i++){
//        printf("%d ", myArray[i]);
//    }
//    printf("\n");
//
//    min = max = myArray[0];
//
//    for(int i = 1; i < n; i++){
//        if(min > myArray[i]){
//            min = myArray[i];
//        }
//        if(max < myArray[i]){
//            max = myArray[i];
//        }
//    }
//
//    printf("\nminimum element is : %d\n", min);
//    printf("maximum element is : %d\n", max);








// problem 4: Write a program in C to sort elements of an array in ascending and descending order.
    int myArray[100], n, temp;

    printf("Input the size of array: ");
    scanf("%d", &n);

    printf("Input %d elements in the array: \n\n", n);
    for(int i=0; i < n; i++)
    {
        printf("myArray[%d] : ", i);
        scanf("%d", &myArray[i]);
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(myArray[i] > myArray[j])
            {
                temp = myArray[i];
                myArray[i] = myArray[j];
                myArray[j] = temp;
            }
        }
    }

    printf("\nElements of array in sorted ascending order: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", myArray[i]);
    }



    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
           if(myArray[i] < myArray[j]) {
               temp = myArray[i];
               myArray[i] = myArray[j];
               myArray[j] = temp;
           }
        }
    }
    printf("\n");

    printf("Elements of array sorted in descending order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");





    return 0;
}
