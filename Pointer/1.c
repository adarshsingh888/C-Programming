#include <stdio.h>
int main() {
    
    int num=10;
    int *ptr=&num;
    printf("Value of num using variable name: %d \n",num);
    printf("Value of num using pointer: %d \n",*ptr);
    printf("Address of num variable: %p \n",ptr);

    printf("Modifying value of num using pointer...\n");
    num=20;  // same as *ptr=20; 
    printf("New value of num using variable name: %d \n",num);
    printf("New value of num using pointer: %d \n",*ptr);

    return 0;
}