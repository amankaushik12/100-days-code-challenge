#include <stdio.h>
int main (){ 
    int n ;
    
    printf(" enter a n : ");
    scanf("%d", &n);

    if (n == 0 ) {
        printf("%d is even\n" , n);

    }
    else{
        printf("%d is odd\n ", n);

    }

    return 0 ;

}