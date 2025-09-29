#include <stdio.h>
#include <stdlib.h>

int main() {
    int number, r_n = 0, r;
    printf("Enter your number here: ");
    scanf("%d", &number);

    while (number > 0) {
        r = number % 10;           
        r_n = r_n * 10 + r;        
        number /= 10;              
    }

    printf("Reversed number: %d\n", r_n);
    return 0;
}

