/* Prints a table of squares using a while statement */

#include <stdio.h>

main()
{
    int i, n;

    printf("this program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        printf("%10d%10d\n", i, i * i);

    return 0;
}
