// switch case calculator
#include <stdio.h>
int main()
{
    char operator;
    double firstNum, secondNum;
    printf("enter the operand (+, -, *, /): ");
    scanf("%c",&operator);
    
    printf("\nenter two operands: ");
    scanf("%lf %lf", &firstNum, &secondNum);

    switch (operator)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",firstNum, secondNum, firstNum + secondNum);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf",firstNum, secondNum, firstNum - secondNum);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf",firstNum, secondNum, firstNum * secondNum);
            break;
        case '/':
            if (secondNum !=0)
                printf("%.1lf / %.1lf = %.1lf",firstNum, secondNum, firstNum / secondNum);
            else printf("you cant divide by zero!");    
            break;
        default:
            printf("error!");
    }
    return 0;
}