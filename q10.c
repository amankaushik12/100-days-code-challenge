#include<stdio.h>

int main(){
    int total_seconds , hours , minutes , seconds ;
    printf("enter time in seconds : ");
    scanf("%d", &total_seconds);

    // conversion
    hours = total_seconds / 3600 ;
    minutes = ( total_seconds % 3600 ) / 60;
    seconds = total_seconds % 60 ; 

    printf(" time =  %02d , %02d , %02d \n", hours , minutes , seconds );

    return 0 ;

}