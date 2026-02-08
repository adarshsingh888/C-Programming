#include<stdio.h>

#include<stdlib.h>

int main(void)
{
    int i;
    int *ptr = (int *) malloc(5 * sizeof(int));
    int *ctr=ptr;
 
    for (i=0; i<5; i++)
        *(ptr + i) = i;
 
    printf("%d  \n", *ptr++);
    printf("%d \n", (*ptr)++);
    printf("%d \n", *ptr);
    printf("%d \n", *++ptr);
    printf("%d \n", ++*ptr);

    printf("\n");

    for(i=0; i<5; i++){
        printf("%d ", *(ctr + i));
    }
     
}