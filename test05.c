//โปรแกรมแสดงชื่อ Sombat และคะแนน 99 ทางหน้าจอ

int main() {

    char fullname[10] = "sombat";
    int score;

    score = 99;

    //ใน "" ของ printf() เขียนอย่างไรแสดงอย่างนั้น 
    //ยกเว้น % format spec. ,\ srquence
    printf("Name is :fullname\n");
    printf("Name is :%s\n", fullname);
    printf("Score is :%d\n", fullname);

    return 0;
}