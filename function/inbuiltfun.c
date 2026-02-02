#include <stdio.h>
#include <math.h>
#include <ctype.h>
int main() {
   
    char ch='a';

    isalpha(ch) ? (islower(ch) ? printf("%c is a lowercase letter.\n", ch) : printf("%c is an uppercase letter.\n", ch)) 
    : printf("%c is not an alphanumeric character. \n", ch);

    isalpha(ch)? (islower(ch) ? printf("%c to uppercase is %c\n", ch, toupper(ch)) : printf("%c is already lowercase\n", ch)) :
    printf("%c is not an alphabetic character. \n", ch);


    isalnum(ch) ? printf("%c is an alphanumeric character.\n", ch) : printf("%c is not an alphanumeric character. \n", ch);
    return 0;
}