// no parameters, no return
#include <stdio.h>

void funA();
void funB();

void funA(){
    printf("Hey.....\n");
    funC();
}
int main() {
    funA();
    funB();
    funC();
    return 0;
}

void funB(){
    printf("Hi.....\n");
}

void funB(){ printf("Hi.....\n"); }
void funC(){ printf("Hello.....\n"); }