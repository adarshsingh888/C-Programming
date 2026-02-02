#include <stdio.h>
int main(){
    int x = 10;
    int y = 20;

    // Using relational operators
    int isGreater = x > y;      // false (0)
    int isLess = x < y;         // true (1)
    int isEqual = x == y;       // false (0)
    int isNotEqual = x != y;    // true (1)
    int isGreaterEqual = x >= y; // false (0)
    int isLessEqual = x <= y;    // true (1)

    printf("%d > %d: %d\n", x, y, x>y);
    printf("%d < %d: %d\n", x, y, isLess);
    printf("%d == %d: %d\n", x, y, isEqual);
    printf("%d != %d: %d\n", x, y, isNotEqual);
    printf("%d >= %d: %d\n", x, y, isGreaterEqual);
    printf("%d <= %d: %d\n", x, y, isLessEqual);

    return 0;
}