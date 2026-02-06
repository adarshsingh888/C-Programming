#include <stdio.h>
#include <string.h>
typedef enum{
    Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday
} Days;
Days golobal_day;
int main(){
    Days today;
    today = Wednesday;
    printf("Day number: %d\n", today);
    if (today == Wednesday) {
        printf("Today is Wednesday\n");
    }   

    Days to;
    printf("%d \n",to); // uninitialized variable . It prints garbage value because it  is local variable
    printf("%d \n",golobal_day); // global variable is initialized to 0 by default
    return 0;
}