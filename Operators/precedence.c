#include <stdio.h>
int main(){
    int b=5;
    int a = b++ + 3 * 2; // Multiplication has higher precedence

    printf("Result of expression: %d\n", a);
    printf("Value of b after expression: %d\n", b);
    return 0;
}