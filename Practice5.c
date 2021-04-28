//a program to find the volume of a cylinder
#include <stdio.h>
#include <math.h>
int main()
{
    float vol, pi = 3.14;
    float r, h;
    printf("Value For Radius\n");
    scanf("%f", &r);
    printf("Value For Height\n");
    scanf("%f", &h);
    vol = pi * pow(r, 2) * h;
    printf("volume is:%f", vol);
    printf("m3");
    return 0;
}
