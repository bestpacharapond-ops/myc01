#include <stdio.h>

double funC();

int funA(){
    printf("Hi....\n");
    return 500; //literal data   
}
int main() {
    printf("%d\n", funA());
    funC();
    return 0;   
}

double funC(){
    printf("Hey....\n");
    return 10 * 20.5; // explicit    
}