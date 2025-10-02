//take marks of 5 subjects and calculate percentage & grade (if-else ladder).

#include <stdio.h>
int main (){
    int p, c, m, e, h, marks;
    float percentage;

    printf("Enter marks of phy or chem or math or eng and hindi respectively :");
    scanf("%d %d %d %d %d", &p , &c , &m , &e , &h);

    marks = p + c + m + e + h;

    percentage = marks / 5.0;

    printf("Percentage: %.2f\n", percentage);

    if (percentage >= 90){
        printf("grade A+");
    
    
    }
    else if (percentage >= 80)
    {
        printf("grade B");
        
    }
    else if (percentage >= 60)
    {
        printf("grade C");


    }
    else if (percentage >= 40)
    {
        printf("grade D");


    }
    else 
    {
        printf("You are failed");
    }
    
    
    
}
