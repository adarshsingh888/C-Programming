#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointer to the first element of the array

    printf("Array elements using pointer arithmetic:\n");
    for(int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *(ptr + i)); // Accessing elements using pointer arithmetic
    }

    printf("\nModifying array elements using pointer arithmetic:\n");
    for(int i = 0; i < 5; i++) {
        *(ptr + i) += 5; // Increment each element by 5
        printf("Element %d after modification: %d\n", i, *(ptr + i));
    }

    printf("\nArray elements using ++arr: %d\n", *(++ptr)); // Move pointer to next element and print
    printf("Array elements using arr++: %d\n", *(ptr++)); // Print current element and then move pointer to next
    printf("Current element after arr++: %d\n", *ptr); // Print current element after previous increment
    printf("\n");
    printf("Array elements using --arr: %d\n", *(--ptr)); // Move pointer back to previous element and print
    printf("Array elements using arr--: %d\n", *(ptr--)); // Print current element and then move pointer back
    printf("Current element after arr--: %d\n", *ptr); // Print current element after previous decrement

    int *ptr4= &arr[4];
    int *ptr2= &arr[2];
    printf("\n");
    printf("Array element at current pointer4: %d\n", *ptr4); // Current element
    printf("Array element using ptr3=ptr4-ptr2: %d\n",  *(ptr2 + (ptr4 - ptr2) -1)); // Difference between two pointers

    return 0;
}
