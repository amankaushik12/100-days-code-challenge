#include <stdio.h>

int main() {
    int num, digit;
    int product = 1;
    int hasOdd = 0;  // to check if odd digit exists

    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num; 

    while (num != 0) {
        digit = num % 10;      
        if (digit % 2 != 0) {  // check if odd
            product *= digit;
            hasOdd = 1;
        }
        num /= 10; 
    }

    if (hasOdd)
        printf("Product of odd digits of %d = %d\n", original, product);
    else
        printf("%d has no odd digits.\n", original);

    return 0;
}
