//preprocess directive
#include <stdio.h>
#include <math.h>
#define ShowSenPa printf("-----------------------------\n");
#define Smile "*_*"

//global decation
int number = 555;
void showHi();

void showHi(){ //uner-defined function
        printf ("Hey\n");
}

int main() { //main function
    printf("Welcome to SAU\n");
    ShowSenPa
    showHi();
    showHi();
    ShowSenPa

    return 0;
}

void showHi(){ //user-defined function
    printf ("Hi\n");
}
