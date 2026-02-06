#include <stdio.h>
void checkEvenOdd(int number) {
    if (number % 2 == 0) {
        printf("%d is Even\n", number);
    } else {
        printf("%d is Odd\n", number);
    }
}
int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    checkEvenOdd(num);

    return 0;
}