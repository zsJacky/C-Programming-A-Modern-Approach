/* This is the eighth exercise of chapter2 */

#include <stdio.h>

main()
{
    float i, n;

    printf("Enter a dollar amount: ");
    scanf("%f", &i);

    n = i + i * 0.05;
    printf("With tax added: %.2f", n);
}
