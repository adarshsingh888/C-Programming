#include <stdio.h>
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    
    int i=0;
    while(i<size){
        printf("Enter the value of arr at index: %d ",i);
        scanf("%d",&arr[i]);
        i++;

    }
    printf("The values of the array are:\n");
    i=0;
    while(i<size){
        printf("Value at index at %d is %d\n",i,arr[i]);
        i++;
    }

}