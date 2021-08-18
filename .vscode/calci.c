#include <stdio.h>

int main()
{
    int choice;
    float num1, num2;
    printf("choose the operation...\n");
    printf("1.addition\n");
    printf("2.substraction\n");
    printf("3.multiplication\n");
    printf("4.division\n");
    scanf("%d", &choice);

    printf("enter the first number...\n");
    scanf("%f", &num1);
    printf("enter the second number .... \n");
    scanf("%f", &num2);

    if (choice == 1)
    {
        printf("the addition of two numbers is %f \n",  num1 + num2);
    }
    else if (choice == 2)
    {
        printf("the substraction of two numbers is %f \n", num1 - num2);
    }
    else if (choice == 3)
    {
        printf(" the multiplication of two numbers is %f \n", num1 * num2);
    }
    else if (choice == 4)
    {
        printf("the division of two numbers is %f \n", num1 / num2);
    }
    else 
    {
        printf("you have entered wrong choice........");
    }
    
    return 0;
}