#include <stdio.h>
int main(){
    char str[]="Hello";

    printf("Address of string: %p \n",str);
    printf("Printing the string: %s ",str);

    int size=sizeof(str);
    printf("Size of string: %d",size); // print 6 (includes null character)

    char *str2="Hello"; // can not be modifyed
    printf("\n Address of string: %c \n",*str2); // print only first character 'H'
    printf("Printing the string: %s ",str2); // print full string
    
    str2="New Hello"; // can point to another string
    printf("\n Address of string: %c \n",*str2); // print only first character 'N'
    printf("Printing the string: %s ",str2); //

    char str3[7]="1234",*p;
    p=str3+2;
    *p='0'; // modify the 3rd character
    printf("\n Modified string: %s ",str3); // print 1204
    return 0;
}