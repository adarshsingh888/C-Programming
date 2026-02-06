#include <stdio.h>
#include <stdlib.h>
int main() {
    // Null pointer
    int *nullPtr = NULL;
    printf("Value of nullPtr: %p \n", nullPtr);

    printf("\n");

    // Void pointer
    int number = 42;
    void *voidPtr = &number;
    printf("Value of voidPtr (address of number): %p \n", voidPtr);
    printf("Value pointed by voidPtr (after casting to int*): %d \n", *( (int*)voidPtr )); // Typecasting required

    printf("\n");

    // Wild pointer
    int *wildPtr; // Uninitialized pointer
    //printf("Value of wildPtr: %p \n", wildPtr); // Uncomment to see garbage value (undefined behavior)
    //printf("value of number using wildPtr (undefined behavior): %d \n", *wildPtr); // Uncommenting this line may cause a crash

    printf("\n");

    // Dangling pointer
    int *danglingPtr=(int *)malloc(sizeof(int));
    *danglingPtr=55;
    printf("The address of dang: %p \n",danglingPtr);
    printf("The value of dang: %d \n",*danglingPtr);
    free(danglingPtr); 
    printf("The address of danglingPtr after free: %p \n",danglingPtr);
    printf("The value of dang after free (undefined behavior): %d",*danglingPtr);


}