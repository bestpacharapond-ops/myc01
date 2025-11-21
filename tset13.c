#include <stdio.h> //"stdio.h"
#define pa printf("---------------------\n");

int main() {
    int number;
    pa
    printf("Even & Odd Numbers\n");
    pa
    while (1){ //วนแบบinfinite loop
        printf("Enter number: ");
        scanf("%d", &number);
        if (number <= 0) {
            break; 
        }
        if (number % 2 == 0) {
            printf("%d is even Number\n");
        } else {
            printf("%d is Odd Number\n");
        }
        pa
    }
    
     return 0;
}