#include <stdio.h>
#include <string.h>
typedef struct {
    int id;
    char name[50];
    float salary;
} Employee;
int main(){
    Employee e1;
    
    printf("Enter Employee ID:");
    scanf("%d", &e1.id);
    printf("Enter employee Name:");
    //scanf("%s", e1.name); it will stop at space
    getchar(); // to consume the newline character left by previous scanf
    fgets(e1.name, sizeof(e1.name), stdin);
    printf("Enter employee Salary:");
    scanf("%f", &e1.salary);

    printf("Employee details: %d %s %.2f \n",e1.id,e1.name,e1.salary);
    return 0;
}