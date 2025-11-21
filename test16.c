#include <stdio.h>

void funB (char* name, int age) ;
    
void funA(int a, int b) {
    funB("Sombat", 20);
    printf("%d\n", a + b);
    funB("Somchai", 35);
}

int main() {
    funA(10, 20);
    return 0;
}

void funB (char* name, int age) {
    printf("Hello %s\n, name");
    printf("Your age is %d\n", age);
}