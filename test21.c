#include <stdio.h>

#define SENPA printf("=================\n");
#define ROW_STD 5
#define COL_SUB 3

int main()
{
    int stu_score[ROW_STD][COL_SUB];
    char subj_name[3][10] = {"Math", "Science", "English"};

    printf("================SCORE TABLE================\n");
    for (int x = 0; x < ROW_STD; x++)
    {
        for (int y = 0; y < COL_SUB; y++)
            printf("Student No.%d\n", x + 1);
        for (int y = 0; y < 3; y++)
        {
            printf("  %-10s : ", subj_name[y]);
            scanf("%d", &stu_score[x][y]);
        }
        printf("\n");
    }

    printf("================AVERAGE SCORE SCALE================\n");
    for (int y = 0; y < COL_SUB; y++)
    {
        double sum = 0;
        for (int x = 0; x < ROW_STD; x++)
        {
            sum = sum + stu_score[x][y];
        }
        double avg = sum / ROW_STD;
        printf("%-10s : %.lf\n", subj_name[y], avg);
    }

    return 0;
}
