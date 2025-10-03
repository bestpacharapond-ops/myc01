//เขียนโปรแกรมแสดงข้อความ IOL-SAU
//แสดงผลการคำนวณของ 2 ยกกำลัง 500
// "" double quote, '' single quote, # hash, / slash ,\bash slash
// {} culon ,[] square bracket,() round bracket, <> angle bracket
// : colon, ; semicilon,` backtick(Ait+9+6)



#include <stdio.h> //หรือ "stdio.h"
#include <math.h>

//การกำหนดค่าคงที่ คือ การสร้างตัวแทนเพื่อมาเก็บข้อมูลใดๆ โดยที่ไม่สามารถเปลี่ยค่าข้อมูลนั้นได้
#define showline printf("----------------\n");
#define smile "^____^"

int main(){
    showline
    printf("IOL-SAU\n");
    showline
    printf("%lf\n", pow (2 ,500));
    printf("%s\n", smile);
    showline    

    return 0;
}