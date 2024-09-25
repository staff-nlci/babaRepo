#include <stdio.h>
#include <stdlib.h>
#define INITIAL_CAPACITY 10
// Function to add an element to an array
void addElement(int **arr, int *s, int *capacity, int element) {
    // Check if resizing is necessary
    if (*s >= *capacity) {
        // Double the capacity
        *capacity *= 2;

        // Create a new array with the new capacity
        int *newArr = (int *)realloc(*arr, (*capacity) * sizeof(int));
        if (newArr == NULL) {
            printf("Memory allocation failed\n");
            return;
        }
        *arr = newArr;
    }
    // Add the new element to the end of the array
    (*arr)[*s] = element;
    (*s)++;
}
int main() {
    int size = 0;
    int capacity = INITIAL_CAPACITY;
    int *arr = (int *)malloc(capacity * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
 addElement(&arr, &size, &capacity, 10);
    addElement(&arr, &size, &capacity, 15);

    for(int i=1;i<=100;i++)
    {
            addElement(&arr, &size, &capacity, i);
    }
    // Print the elements in the array
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(arr);


    return 0;
}
