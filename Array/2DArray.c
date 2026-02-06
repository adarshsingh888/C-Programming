#include<stdio.h>
int main(){
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    printf("Enter number of columns: ");
    scanf("%d",&cols);  
    int arr[rows][cols];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("Enter value for arr[%d][%d]: ",i,j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The values of the 2D array are:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ", arr[i][j]);

        }
        printf("\n");
    }
}