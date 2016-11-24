/* This is the seventh exercise of  chapter2 */

#include <stdio.h>

main()
{
    int r;
    float v, PI;

    PI = 3.14;

    scanf("%d", &r);

    v = PI * r * r * r * 4.0 / 3.0;
    printf("the volume of ball is: %2f", v);
    scanf("%f", &v);
    return 0;
}
