#include <stdio.h>
#include <math.h>

int main()
{
    double x, y, z;
    double atsA, atsB;

    printf("Ivesk x: ");
    scanf("%lf", &x);

    printf("Ivesk y: ");
    scanf("%lf", &y);

    printf("Ivesk z: ");
    scanf("%lf", &z);

    atsA = x + (4 * y) + (pow(z, 3));
    atsB = (x + sqrt(y)) * (pow(z, 4) - abs(z) + 46.3);

    printf("Ats a): %.2lf\nAts b): %.2lf", atsA, atsB);

    return 0;
}