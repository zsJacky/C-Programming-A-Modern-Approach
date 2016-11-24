/* This is the ninth exercise of  chapter2 */

#include <stdio.h>

#define PI 3.14

main()
{
    int r;
    float v;

    scanf("%d", &r);

    v = PI * r * r * r * 4.0 / 3.0;
    printf("the volume of ball is: %2f", v);
    scanf("%f", &v);
    return 0;
}
