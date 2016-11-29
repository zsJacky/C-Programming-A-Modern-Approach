/* This is the sixth exercise of the chapter3 */

#include <stdio.h>

main()
{
    int grp1, grp2, grp3, grp4;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d", &grp1, &grp2, &grp3, &grp4);

    printf("Language: %d\n", grp1);
    printf("Publisher: %d\n", grp2);
    printf("Book Number: %d\n", grp3);
    printf("Check digit: %d", grp4);

    return 0;
}
