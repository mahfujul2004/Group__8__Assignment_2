#include<stdio.h>
#include<math.h>
int main()
{
    float angle=45, m=1, ratio;
    ratio = m / sin(angle * (3.1416 / 180));
    printf("The ratio of Slit width and Wavelength is %.2f\n",ratio);
    return 0;
}

