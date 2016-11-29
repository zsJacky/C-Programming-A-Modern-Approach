/* This is the fourth exercise of chapter3 */

#include <stdio.h>

main()
{
    int month, day, year;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d /%d/ %d", &month, &day, &year);

    printf("You entered the date %d%.2d%d", year, month, day);

    return 0;
}

