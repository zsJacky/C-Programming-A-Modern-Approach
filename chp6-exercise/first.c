#include <Stdio.h>
int main(void)
{
    float number;
    float max=0;
    while(1)
    {
        printf("Enter a number:\t");
        scanf("%f",&number);
        if(number>max)
        {
            max=number;
        }
        if(number<=0)
        {
            break;
        }
    }
    printf("The largest number entered was %f\n",max);
    return 0;
}
