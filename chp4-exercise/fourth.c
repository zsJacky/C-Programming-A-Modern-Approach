/* This is the fourth exercise of chapter4  */

#include <stdio.h>

main()
{
    int i;

    printf("Enter a three-digit number: ");
    scanf("%d", &i);
    printf("The reversal is: %d%d%d", i % 10, (i % 100) / 10, i / 100);

    return 0;
}
