#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1=0,n2=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n1);

    int *ptr=(int*)malloc(n1*sizeof(int));
    
    for(int i=0;i<n1;i++){
        ptr[i]=i+1;
    }

    printf("Do you want to all more data? (y/n): ");
    char choice;
    scanf(" %c",&choice);
    
    if(choice == 'y' || choice == 'Y'){
        
        printf("Enter the number of additional elements: ");
        scanf("%d",&n2);
        ptr=(int*) realloc(ptr,(n1+n2)*sizeof(int));
        if(ptr == NULL){
            printf("Memory reallocation failed.\n");
            return 1;
        }
        for(int i=n1;i<n1+n2;i++){
            ptr[i]=i+1;
        }
    }
    else{
        printf("No additional data will be added.\n");
    }

    printf("The elements in the array are: ");
    for(int i=0;i<n1+n2;i++){
        printf("%d ",ptr[i]);   
    }
    printf("\n");

    free(ptr);
    ptr=NULL;
    return 0;
}