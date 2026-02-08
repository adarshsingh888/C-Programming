#include <stdio.h>
#include <stdlib.h>
int main()
{    
    float *ptr;
    printf("Address of ptr before allocation: %p\n",ptr);

    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    ptr=(float*)calloc(n,sizeof(float));
    
    printf("Address of ptr after allocation: %p\n",ptr);
    
    printf("Print the default values of allocated memory:\n");
    for(int i=0;i<n;i++)
    {
        printf("%f ",ptr[i]);
    }
    printf("\n");
    
    // free the allocated memory
    free(ptr);
    printf("Address of ptr after freeing memory: %p\n",ptr);

    ptr=NULL; // setting ptr to NULL after freeing memory

    printf("Memory successfully freed.\n");
    
    // checking the allocation of memory after freeing
    if(ptr==NULL)
    {
        printf("Memory not allocated.\n");
    }
    else
    {
        printf("Memory successfully allocated using calloc.\n");
        printf("Address of ptr: %p\n",ptr);
    }
}
