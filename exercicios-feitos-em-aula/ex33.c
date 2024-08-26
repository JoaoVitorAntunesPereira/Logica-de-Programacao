#include <stdio.h>
#include <math.h>

int main(){
    float a=1, b=2, c=-3, x1, x2;

    x1 = (-(b)+sqrt((b*b)-4*a*c))/(2*a);

    x2 = (-(b)-sqrt((b*b)-4*a*c))/(2*a);
    
    printf("x1: %.2f", x1);
    printf("\nx2: %.2f", x2);
}
