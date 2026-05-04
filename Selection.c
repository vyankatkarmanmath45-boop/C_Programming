#include <stdio.h>

int main()
{

    int No = 0;

    printf("Enter Number : \n");
    scanf( "%d", &No);
    if(No % 2 == 0)
    {
        printf("It's Even Number\n");
    }
    else
    {
        printf("It's Odd Number\n");
    }

    return 0;
}