#include <stdio.h>
void modifyByValue(int value) {
    value += 10; // This modification won't affect the original variable
    printf("Inside modifyByValue: %d\n", value);
}
void modifyByReference(int *numPtr) {
    *numPtr += 10; // This modification will affect the original variable
    printf("Inside modifyByReference: %d\n", *numPtr);
}
int main() {
    int value = 20;
    printf("Before modifyByValue: %d\n", value);
    modifyByValue(value);
    printf("After modifyByValue: %d\n", value); // value remains unchanged  

    printf("\n");
    
    printf("Before modifyByReference: %d\n", value);
    modifyByReference(&value);
    printf("After modifyByReference: %d\n", value); // value is modified
}
