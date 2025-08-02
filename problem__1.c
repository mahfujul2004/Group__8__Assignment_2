#include<stdio.h>
#include<math.h>
int main()
{
    float wavelength,d,angle,m;
    printf("We Know that : m=(d * sin(angle))/ wavelength\n");
    printf("Enter wavelength: ");
    scanf("%f",&wavelength);
    if(wavelength>380 || wavelength<750){
        wavelength=wavelength / 1000000000;
        printf("Enter slit distance (µm): ");
    scanf("%f", &d);
    d= d / 1000000;

    printf("Enter angle (degrees): ");
    scanf("%f", &angle);

    angle= angle * 3.1416/ 180;
    m=(d * sin(angle))/ wavelength;
    printf("Maxima order(m) :%d",(int)m);
    }
    else
         printf("Wavelength out of range\n");

    return 0;

}


