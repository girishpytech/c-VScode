#include<stdio.h>
int main()
{
    int choice;
    float a,f,c;
    printf("choose the operation...\n 1.celsius to far..\n 2.far to celsius..\n");
    scanf("%d", & choice);

    if (choice >= 3 || choice <=0)
    {
        printf("invalid choice....\n");
    }
    else{
        printf("enter the input...\n");
        scanf("%f",& a);
        if (choice == 1)
        {
           printf("the fernheit  2coversion of  is %f\n",f=a*1.8+32);
        }
        else if (choice == 2)
        {
            printf("the celcius conversion of  is %f \n",c=(a-32)/1.8);
        }
        return 0;
    }

}