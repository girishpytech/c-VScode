#include<stdio.h>

int main()
{
    int choice;
    float a,b ;
    printf("choose the operation you want to perform....\n");
    printf("1.Adition \n 2.substraction \n 3.multiplication \n 4.division\n");
    scanf("%d", & choice);
    if (choice >= 5 || choice <= 0)
{
    printf("you have entered a wrong choice.... check the number carefully...\n");
}

else{
    printf("enter first number.\n");
    scanf("%f",& a);
    printf("enter the second number.\n");
    scanf("%f",& b);
    if ( choice ==1){
        printf("Addition is...%f",a+b);
    }
    else if ( choice == 2)

    
    {
        printf("substarction is %f",a-b);
    }
    else if ( choice ==3)
    {
        printf("multiplication is  %f",a*b);
    }
    else
    {
        printf("division is %f", a/b);
    }

}
 return 0;
}