#include <stdio.h>
#define PI 3.14159265358979323846
int main()
{
    double f;
    scanf("%lf", &f);
    print("%lf\n", f / 180.0 * PI);
    printf("%lf\n", f * 180.0 / PI);
}