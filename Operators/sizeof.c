#include <stdio.h>

int main() {
    int a = 10;
    char b = 'A';
    float c = 5.5;
    double d = 10.55;
    long e = 123456;

    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of long: %zu bytes\n", sizeof(long));

    printf("Size of variable a: %zu bytes\n", sizeof(a));
    printf("Size of variable b: %zu bytes\n", sizeof(b));
    printf("Size of variable c: %zu bytes\n", sizeof(c));
    printf("Size of variable d: %zu bytes\n", sizeof(d));
    printf("Size of variable e: %zu bytes\n", sizeof(e));

    return 0;
}
