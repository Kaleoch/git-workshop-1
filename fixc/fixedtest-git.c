#include <stdio.h>
int main()
{
    int num1, num2;
    printf("I love CE!!!");
    printf("\nEnter number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    num1 += num2;
    printf("The sum of two numbers is: %d", num1);
    return 0;
}