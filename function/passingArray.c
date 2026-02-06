#include <stdio.h>
void display(char ch) {
    printf("Character: %c\n", ch);
}
void displayArray(char arr[], int size) {
    printf("Array elements:\n");
    for(int i = 0; i < size; i++) {
        printf("Element %d: %c\n", i, arr[i]);
    }
}
void displayArrayusingPointer(char *arrPtr, int size) {
    printf("Array elements using pointer:\n");
    for(int i = 0; i < size; i++) {
        printf("Element %d: %c\n", i, *(arrPtr + i));
    }
}
int main() {
    char ch[] = {'A', 'B', 'C', 'D', 'E'};
    int size =sizeof(ch)/sizeof(ch[0]);

    printf("Displaying characters:\n");
    for(int i = 0; i < size; i++) {
        display(ch[i]);
    }

    printf("\n");

    displayArray(ch, size);

    printf("\n");

    displayArrayusingPointer(ch, size);
}