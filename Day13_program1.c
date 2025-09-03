// Write a program to implement a basic calculator using switch-case

#include <stdio.h>

int main()
{
    int num1, num2;
    char operation;

    printf("ENTER WHICH TO USE (+, -, *, /, %): ");
    scanf(" %c", &operation);

    printf("ENTER NUMBER 1 = ");
    scanf("%d", &num1);

    printf("ENTER NUMBER 2 = ");
    scanf("%d", &num2);

    switch (operation)
    {
    case '+':
        printf("Result = %d\n", num1 + num2);
        break;
    case '-':
        printf("Result = %d\n", num1 - num2);
        break;
    case '*':
        printf("Result = %d\n", num1 * num2);
        break;
    case '/':
        if (num2 != 0)
            printf("Result = %d\n", num1 / num2);
        else
            printf("Error: Division by zero is not allowed.\n");
        break;
    case '%':
        if (num2 != 0)
            printf("Result = %d\n", num1 % num2);
        else
            printf("Error: Modulus by zero is not allowed.\n");
        break;
    default:
        printf("Invalid operation!\n");
    }

    return 0;
}
