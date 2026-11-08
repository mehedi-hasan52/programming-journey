#include <stdio.h>
#include <math.h>

int main(){
    int a,b;
    scanf("%d%d", &a,&b);
    double c = pow(a,b)+pow(b,a);
    printf("%.0f", c);
    return 0;
}