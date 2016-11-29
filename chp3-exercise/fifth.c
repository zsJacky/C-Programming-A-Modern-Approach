/* This is the fifth exercise of chapter3 */

#include <stdio.h>

main()
{
    int month, day, year, number;
    float price;

    printf("Enter item number: ");
    scanf("%d", &number);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase date (mm/dd/yy): ");
    scanf("%d /%d/ %d", &month, &day, &year);

    printf("Item\tUnit\t\tPurchase\n");
    printf("\t\Price\t\tDate\n");
    printf("%d\t$%6.2f\t\t%d/%d/%d", number, price, month, day, year);

    return 0;
}
