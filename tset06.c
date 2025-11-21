//Global-Local Variable
#include "stdlib.h" // หรือ <stdio.h>

int dataA = 100; 
const int dataE = 5050; // Constant(ค่าคงที่) Variable
void showData(){
    int dataB = 555; // local variable ใช้ได้เฉพาะใน code block นั้นๆ เท่านั้น

    printf("dataA = %d\n",dataA);
    printf("dataB = %d\n",dataB);
    //printf("dataC = %d\n",dataC); Error 
    //printf("dataD = %d\n",dataD); Error 
}

int main(){
    int dataC = 999; // local variable
    const int dataD = 1010; //Constant(ค่าคงที่) Variable 
    // dataA = 2020; Error 
    
    dataC = 888;

    printf("dataA = %d\n",dataA);
    dataC = 777;
    printf("dataB = %d\n",dataC);
    //printf("dataC = %d\n",dataB); Error 

    return 0;
}   