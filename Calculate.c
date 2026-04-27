#include <stdio.h>

int main()
{
    float No1, No2, result;
    char op;

    printf("Enter first number: ");
    scanf("%f", &No1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%f", &No2);

    if(op == '+')
    {
        result = No1 + No2;
    }
    else if(op == '-')
    {
        result = No1 - No2;
    }
    else if(op == '*')
    {
        result = No1 * No2;
    }
    else if(op == '/')
    {
        if(No2 != 0)
        {
            result = No1 / No2;
        }
        else
        {
            printf("Error: Division by zero\n");
            return 0;
        }
    }
    else
    {
        printf("Invalid operator\n");
        return 0;
    }

    printf("Result = %.2f\n", result);

    return 0;
} 