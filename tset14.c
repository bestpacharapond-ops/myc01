#include <stdio.h>
#define pa printf("---------------------\n");

int main()
{
    int x;

    for (x = 1; x <= 100; x = x++)
    { //++,++x,x++,x ,= 1
        if (x % 8 != 0)
        {
            continue;
        }
        printf("%d\n", x);
    }

    return 0;
}
