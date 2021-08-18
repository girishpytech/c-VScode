#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter the selling price:\n");
    scanf("%f",& b);
    printf("enter the cost price:\n");
    scanf("%f",& c);
    a=b-c;
    if (a<0)
    {
        printf("OOOOOooppps  !!!!!!!!  you have a losss of %f  rs.",a);
    }
    else if (a>0)
    {
        printf("yooooooooyyyyyy!!!!! you have a profit of %f rs.",a);
    }
    return 0;

}