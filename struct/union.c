#include <stdio.h>
#include <string.h>
union Date
{
    int day;
    int month;
    int year;
};
int main()
{
    union Date date;
    date.day = 15;
    printf("Day: %d\n", date.day);
    printf("Size of union: %lu\n", sizeof(date));
    date.month = 8;
    printf("Month: %d\n", date.month);
    printf("Day after modifying month: %d\n", date.day); // day value is now corrupted
    date.year = 2024;
    printf("Year: %d\n", date.year);
    printf("Month after modifying year: %d\n", date.month); // month value is now corrupted
    printf("===== Adresses of union members =====\n");
    printf("Address of day: %p\n", (void *)&date.day);
    printf("Address of month: %p\n", (void *)&date.month);
    printf("Address of year: %p\n", (void *)&date.year);

    printf("All addresses are the same: %s\n", (char *)(date.day == 0 && date.month == 0 && date.year == 0) ? "Yes" : "No");

    printf("Day: %d\n", date.day);

    // this is the change
    printf("This is the change \n");

    // this is going to staged area
    // version 3.0

    return 0;
}