#include <stdio.h>
int main(){
    float a,b ;
    printf("enter the lenght of rectangle:\n");
    printf("enter the breadth of rectangle:\n");
    scanf("%f %f" , &a,&b );
    printf("the perimeter of a rectangle %f\n" , 2*(a+b));
    printf("area of the rectangle %f\n:",a*b);
    return 0 ;
}