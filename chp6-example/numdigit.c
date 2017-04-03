/*  Calculate the number of digits in an integer */

#include <stdio.h>

main()
{
    int digits = 0, n;

    printf("Enter a nonnegetive integer: ");
    scanf("%d", &n);

    do {
        n /= 10;
        digits++;
    } while (n > 0);

    printf("The number has %d digit(s).\n", digits);

    return 0;
}
