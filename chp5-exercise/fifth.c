#include<stdio.h>

main() {
    int i;

    printf("Enter a number: ");
    scanf("%d", &i);

    if (i >= 0 && i <= 9)
        printf("The number %d has 1 digits", i);
    else if (i >= 10 && i <= 99)
        printf("The number %d has 2 digits", i);
    else
        printf("The number %d has 3 digits", i);

    return 0;
}





