/*
    Description: program takes an array, an element and a position and
    inserts that element at the specified position.
*/
#include <stdio.h>

void takeArr(int*, int*);
void printArr(int*, int*);

void insertElement(int*, int*, int, int);

int main() {
    int size;
    printf("Enter the size of the array: ");

    // The if block with scanf is for ruling out the possibility
    // of a failing scanf() i.e. the return value of scan of should not be
    // ignored. Without it the compiler throws a warning: insertelement.c: In
    // function ‘takeArr’:
    // insertelement.c:32:9: warning: ignoring return value of ‘scanf’ declared
    // with attribute ‘warn_unused_result’ [-Wunused-result]
    //    32 |         scanf("%d", &arr[i]);
    //       |         ^~~~~~~~~~~~~~~~~~~~
    if (scanf("%d", &size) != 1) {
      printf("Invalid input!\n");
      return -1;
    }

    // Create the array.
    int arr[50]; // size of the array must be predefined

    takeArr(arr, &size);

    printArr(arr, &size);

    int element, pos;
    printf("Enter the element that you want to insert: ");
    if(scanf("%d", &element) !=1) {
        printf("Invalid input\n");
        return -1;
    }

    printf("Enter the position that you want to insert the element at: ");
    if(scanf("%d", &pos) != 1) {
        printf("Invalid input\n");
        return -1;
    }

    insertElement(arr, &size, element, pos);

    printArr(arr, &size);

    return 1;
}

void takeArr(int arr[], int *size) {
    printf("\nEnter the array elements one by one\n");
    for(int i = 0; i < *size; i++) {
        printf("arr[%d] = ", i);
        if(scanf("%d", &arr[i]) != 1) {
            printf("invalid input\n");
            return;
        }
    }
    printf("\n");

    return;
}

void printArr(int arr[], int *size) {
    printf("\nThis is the array you entered:\n");
    for(int i = 0; i < *size; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    printf("\n");

    return;
}

void insertElement(int arr[], int *size, int element, int pos) {

    // Bounds check

    if (pos < 0 || pos > *size) {
        printf("Invalid position\n");
        return;
    }

    // int max = sizeof(arr) / sizeof(arr[0]); // This won't work because now arr is int* not an array.
    // use a macro #define MAX 50 for size managing

    if(*size >= 50) {
        printf("Array is already full.\n");
        return;
    }

    // Now insert element.
    for(int i = *size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;
    

    (*size)++;

    return;
}