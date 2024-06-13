#include <stdio.h>

int main() {
    int i, j, isPrime;
    
    printf("The prime numbers between 2 and 10 are:\n");
    
    for(i = 2; i <= 10; i++) {
        isPrime = 1; // Assume i is prime
        
        // Check if i is prime
        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                isPrime = 0; // i is not prime
                break;
            }
        }
        
        // Print i if it is prime
        if(isPrime == 1) {
            printf("%d\n", i);
        } else {
            printf("It is not prime: %d\n", i);
        }
    }
    
    return 0;
}
