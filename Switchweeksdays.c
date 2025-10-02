//Take input of a number (1–7) and print the day of the week (switch-case).

#include <stdio.h>
int main(){
    int n;
    printf("Enter a number between 1 to 7 : ");
    scanf("%d", &n);

    switch (n)
    {
    case 1: 
        printf("Its Sunday\n");
        break;
    case 2:
        printf("Its Monday\n");
        break;
    case 3:
        printf("Its Tuesday\n");
        break;
    case 4:
        printf("Its Wednesday\n");
        break;
    case 5:
        printf("Its Thursday\n");
        break;
    case 6:
        printf("Its Friday\n");
        break;
    case 7:
        printf("Its Saturday\n");
        break;
    default:
        printf("Invalid input\n");
        break;
    }
    return 0;
}
