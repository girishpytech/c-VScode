#include<stdio.h>

int main(){
    int year;
    printf("enter the year .....");
    scanf("%d" , &year);

    if (year %4 == 0)
    {
        printf("The Year is  a LEAP YeAr");
    }
    else
    {
        printf(" The Year is NOT A LEAP Year");
    }
    return 0;

}

