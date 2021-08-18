#include <stdio.h>
int main()
{
    int choice;
    float a, b;
    printf("1.addition\n 2.substraction \n 3.multiplication\n 4.division\n");
    printf("what is your choice");
    scanf("%d", &choice);
if (choice >= 5 || choice <= 0)
        
    {
        printf("this is wrong choice\n");
    }
else

{

    printf("first number\n");                                                                                 
    printf("second number\n");
    scanf("%f", &b);

    

     if (choice == 1)
    {
        printf("addition %f\n", a + b);
    }
    else if (choice == 2)

    {
    
    printf("substtraction %f \n", a - b);
}
else if (choice == 3)
{
    printf("the multiplication is %f \n", a * b);
}
else
{
    printf("divisoon is %f\n", a / b);
}
}
return 0;
}