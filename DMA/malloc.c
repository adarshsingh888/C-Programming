#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
    {
        printf("Memory successfully allocated using malloc.\n");
        printf("Address of ptr: %p\n",ptr);
        printf("Defaiult values of allocated memory:\n");
        for(int i=0;i<n;i++)        {
            printf("%d ",ptr[i]);
        }
        printf("\n");

        // Allocatiing values to allocated memory
        for(int i=0;i<n;i++)        {
            ptr[i]=i+1;
        }
        printf("Values of allocated memory after assigning values:\n");
        for(int i=0;i<n;i++)        {
            printf("%d ",ptr[i]);
        }

        printf("\n");

        free(ptr);
        printf("Memory successfully freed.\n");
    }
}