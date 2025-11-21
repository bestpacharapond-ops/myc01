#include <stdio.h>

// สร้าง structure
struct Sau{
    int number[20];
    int id;
    int age;
    float score;
};
int main () {
    struct Sau dataA;
    int dataB[5];

    int dataC[3] = {10,20,30};

    // กรณ๊ที่กําหนดค่าเริ่มต้น
    int dataC[3] = {10,20,30};
    struct Sau dataD = {"Sombat", 1, 20, 99.99};
    
    printf ("%d\n", dataC[2]); //=>30
    printf ("%.2f\n", dataD.score); //=> 99.99
    dataD.id = 65468789;
    


    return 0;
}