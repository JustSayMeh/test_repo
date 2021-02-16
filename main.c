#include <stdio.h>
#define PI 3.14159265358979323846
int main()
{
    double f;
    scanf("%lf", &f);
    print("deg to radians: %lf\n", f / 180.0 * PI);
    printf("radians to deg: %lf\n", f * 180.0 / PI);
}