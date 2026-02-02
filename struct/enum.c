#include <stdio.h>
#include <string.h>
enum Days { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday } ;
enum Days golobal_day;
int main(){
    enum Days today;
    today = Wednesday;
    printf("Day number: %d\n", today);
    if (today == Wednesday) {
        printf("Today is Wednesday\n");
    }

    enum Days to;
    printf("%d \n",to); // uninitialized variable . It prints garbage value beacuse it  is local variable

    printf("%d \n",golobal_day); // global variable is initialized to 0 by default
    return 0;
}