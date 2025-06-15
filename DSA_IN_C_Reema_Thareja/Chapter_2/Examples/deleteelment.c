/*
    Description: This program takes an array and deletes the element at the specified position.
*/

#define MAX 50
#include <stdio.h>

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

void deleteElement(int arr[], int *size, int pos) {
    if(*size == 0) {
        printf("Array is empty.\n");
        return;
    }

    if(pos < 0 || pos >= *size) {
        printf("Invalid position entered.\n");
        return;
    }

    for(int i = pos; i < *size - 1; i++) {
        arr[i] = arr[i+1];
    }

    (*size)--;

    return;
}

int main() {
    int arr[MAX];

    int size;
    printf("Enter the size of the array: ");
    if(scanf("%d", &size) !=1) {
        printf("Invalid Input.\n");
        return 1;
    }

    printf("\n");
    takeArr(arr, &size);
    printf("\n");
    printArr(arr, &size);

    int pos;
    printf("Enter the position from where you want to delete the element:- ");
    if(scanf("%d", &pos) != 1) {
        printf("Invalid Input.\n");
        return 1;
    }

    deleteElement(arr, &size, pos);
    printArr(arr, &size);

    return 0;
}