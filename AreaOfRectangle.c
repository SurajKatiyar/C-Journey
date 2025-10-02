//Write a program to calculate the area of a rectangle using variables.

#include <stdio.h>
int main(){
    int a, b , area;
    printf("Enter value of length a and width  b: ");
    scanf("%d %d", &a , &b);

    area = a * b ;

    printf("area of rectangle is : %d\n", area);
    return 0;
}
