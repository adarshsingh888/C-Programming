#include <stdio.h>
#include <string.h>
int main(){
    struct Employee {
        int id;
        char name[50];
        float salary;
    };

    struct Employee e1;
    e1.id = 101;
    e1.salary = 55000.50;
    // e1.name[50]="John Doe"; X
    strcpy(e1.name, "John Doe");
    printf("Employee details: %d %s %.2f \n",e1.id,e1.name,e1.salary);

  
    
}