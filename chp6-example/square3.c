/* Prints a table of squares using a while statement */

#include <stdio.h>

main()
{
    int i, n, odd, square;

    printf("this program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    i = 1;
    odd = 3;
    for (square = 1; i <= n; odd += 2) {
        printf("%10d%10d\n", i, i * i);
        i++;
        square += odd;
    }
    return 0;
}
