#include <stdio.h>

double num1 = 555; //Global 
double calSpuarArea(double snum1 , double snum2) ;

double sumName (double num1, double num2) { // parwameterถือว่าเป็นตัวแปรแบบlocal
    printf("%d\n",  num1);
    return num1 + num2;
}

int main() {
    double area;
    printf("%21f\n", num1);
    printf("%21f\n", sumName(10, 20));
    printf("%21f\n", sumName(1000, 2000));
    printf("%21f\n", calSpuarArea(10,20));
 
    area = calSpuarArea(10, 20);
    printf("%.21f\n", area);
    return 0;   
}

double calSpuarArea(double snum1 , double snum2) {
    printf("%f\n", snum1);
    return snum1 * snum2;
}