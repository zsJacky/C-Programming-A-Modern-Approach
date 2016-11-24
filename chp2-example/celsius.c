#include <stdio.h>

#define FREEZING 32.0
#define SCALE_FACTOR (5.0 / 9.0)

main()
{
    float f, c;
    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &f);
    c = (f - FREEZING) * SCALE_FACTOR;

    printf("Celsius equivalent: %.1f\n", c);

    return 0;
}
