#include <stdio.h>

int main() {
    // Write C code here
    // Multiples of three, print fizz
    // Multiples of five, print buzz
    // Multiples of seven, print fizzbuzz
    // If none of the above, print the number itself 
    
    int val = printf("Enter a number: ");
    scanf("%d", &val);
    
    if(val%3 == 0) {
        printf("fizz\n");
    }
    else if(val%5 == 0) {
        printf("buzz\n");
    }
    else if(val%7 == 0) {
        printf("fizzbuzz\n");
    }
    else {
        printf("%d\n", val);
    }

    return 0;
}