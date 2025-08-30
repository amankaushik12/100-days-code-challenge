#include<stdio.h>
#include<math.h>

int main (){

    float principal , time , rate;
    float simple_interest , compound_interest;
    
    printf("value of principle amount: ");
    scanf("%f", &principal);

    printf("enter the time :");
    scanf("%f", &time);

    printf("value of rate of interest:");
    scanf("%f", &rate);

    simple_interest = (principal * rate * time)/100; 
    printf("simple_interest = %f \n ", simple_interest);

    compound_interest = principal * (pow((1 + rate / 100 ),time)) - principal;
    printf("compound_interest = %f \n " , compound_interest);

    return 0;

}