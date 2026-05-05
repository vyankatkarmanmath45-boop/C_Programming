#include <stdio.h>

//Decleration
#pragma pack(1)
struct Demo
{

    int i;              //4
    char ch;            //1.  Padding
    float f;            //4

};

int main()
{

    struct Demo dobj;

    printf("Size is %lu\n", sizeof(dobj));      //9

    return 0;

}