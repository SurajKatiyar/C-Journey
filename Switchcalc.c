//Calculator program (switch-case) → user enters operator (+,-,*,/) and two numbers.

#include <stdio.h>
int main (){
    int a, b;
    char op;
    printf("Enter value of a and b :\n");
    scanf("%d %d", &a, &b);
    printf("Enter operator (+,-,*,/): ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        printf("Result: %d\n", a + b);
        break;
    case '-':
        printf("Result: %d\n", a - b);
        break;
    case '*':
        printf("Result: %d\n", a * b);
        break;
    case '/':
        if (b != 0)
            printf("Result: %d\n", a / b);
        else
            printf("Error: Division by zero\n");
        break;
    default:
        printf("Invalid operator\n");
        break;
    }
}
