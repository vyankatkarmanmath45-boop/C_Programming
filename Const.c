#include<stdio.h>

int main()
{
   int i = 10;
   const int j = 10;

   i++; // Allowed
   j++; // Not allowed as j is a constant variable 

   return 0;
}