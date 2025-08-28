#include <stdio.h>

int main(){
    float r;
    printf("value of radius :");
    scanf("%f", &r);

    
    printf("circumference of the circle:%f\n", 2*3.14*r);
    printf("area of the circle:%f\n" , 3.14*r*r);
    scanf("%f", &r);
    return 0;
}