#include <stdio.h>
#include <math.h>

int main(){

    double r;
    scanf("%lf", &r);
    double pi = M_PI ;
    double area = pi*r*r;
    double circum = 2*pi*r;
    printf("%lf %lf", area ,circum);
    return 0;
}