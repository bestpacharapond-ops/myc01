#include <stdio.h> //printf(), scant()
#define showLine printf("-----------------------");

int main()
{
    int bus_number; // int (%d) ,long int (%ld)
    showLine
        printf(" Bun number infomation\n");
    showLine
        printf("Enter bus number:\n ");
    scanf("%d", &bus_number);
    showLine switch (bus_number)
    {
    case 57:
        printf("Go to Pinklo, Bangkhunnon\n");
        break;
    case 3:
        printf("Go to Sanam Luang, Ladproao\n");
        break;
    case 71:
        printf("Go to Hua Lamphong, Yaowarat\n");
        break;
    case 56:
        printf("Go to Bang Lamphu, Sapan Krungthon\n");
        break;
    case 539:
        printf("Go to Samsen, Anusawari Chai\n");
        break;
    default:
        printf("Don\'t have data\n");
    }
    showLine

        return 0;
}