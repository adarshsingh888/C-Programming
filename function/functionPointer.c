#include <stdio.h>
int result(int num1, int num2){
    return num1+num2;
}
int main() {
    int num1=20;
    int num2=15;
    int (*funptr)(int, int)=&result; // Function pointer declaration and initialization
    int res = (*funptr)(num1, num2); // Calling the function using the function pointer
    printf("The sum of %d and %d is: %d\n", num1, num2, res);

    printf("\n");
    // Another way to call the function using the function pointer
    int (*ptr)(int, int)=result;
    res = ptr(num1, num2);
    printf("The sum of %d and %d is: %d\n", num1, num2, res);
    return 0;
}