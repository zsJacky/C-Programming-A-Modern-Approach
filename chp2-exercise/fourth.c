/* This is the fourth exercise of chapter2 */

#include <stdio.h>

main()
{
    int height = 8, length = 12, width = 20;
    int volume;

    volume = height * length * width;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", ((volume + 165) / 166));

    return 0;
}

