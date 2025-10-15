#include <stdio.h>

int main() {
    int num, binary[32], i = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    int n = num;  
    while (num > 0) {
        binary[i] = num % 2;  
        num = num / 2;        
        i++;
    }

    printf("Binary of %d = ", n);
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
