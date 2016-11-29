/* This is the fifth exercise of chapter4  */

#include <stdio.h>

main()
{
    int i, j, k;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &i, &j, &k);
    printf("The reversal is: %d%d%d", k, j, i);

    return 0;
}
