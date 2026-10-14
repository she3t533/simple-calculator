#include <stdio.h>
int main(){

    int num1,num2;
    printf("Input 1st number: ");
    scanf("%d", &num1);
    printf("Input 2nd number: ");
    scanf("%d", &num2);

    int add,sub,mult;
    float div;
    add=num1+num2;
    sub=num1-num2;
    mult=num1*num2;
    div=num1/num2;
    printf("========RESULT========\n");
    printf("Addition: %d\n", add);
    printf("Subtraction: %d\n", sub);
    printf("Multiplication: %d\n", mult);
    printf("Division: %.2f\n", div);
    
    return 0;
}



