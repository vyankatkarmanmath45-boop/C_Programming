#include <stdio.h>

int no = 11;    //Global Variable  (Data Section)


void fun()
{
    int i = 51;   //Local Variable (Stack Section)
    printf("Inside fun : %d\n",i);
    printf("Inside fun : %d\n",no);
}

int main()
{
    int i = 21;   

    printf("Inside main : %d\n",i);
    printf("Inside main : %d\n",no);

    fun();

    return 0;
}