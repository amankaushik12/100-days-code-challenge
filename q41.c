#include<stdio.h>
#include <math.h>

int swapfirstlast(int n ){

    if (n >= 0 && n <= 9 ){
        return n ; 
    }
    int lastdigit = n %10;
    int firstdigit = n ; 
    int placevalue = 1;
    
    while (firstdigit>=10){
        firstdigit /=10;
        placevalue *= 10;
    }
    int middlepart = (n - firstdigit * placevalue)/10;

    int swappedn =( lastdigit* placevalue) + middlepart*10 + (firstdigit);

    return swappedn;

}
int main (){
    int num ; 
    printf("enter a number: ");

    if (scanf("%d", &num )!= 1){
        printf("invalid input .\n");
        return 1;

    }
    if (num < 0 ){
        printf("swapping is not implemented for negative numbers .\n");
        return 1;


    }
    int result = swapfirstlast(num);

    printf("original number : %d\n", num );
    printf("number after swapping first and last digit: %d\n" , result);

    return 0;
    
}