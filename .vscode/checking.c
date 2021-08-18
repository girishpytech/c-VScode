// Online C compiler to run C program online
#include <stdio.h>

int main() {
int year;
printf("Enter your year\n");
scanf ("%d",&year);

if(year   %4 == 0)
{
    printf("this year is leaf year\n");
}
else
{
    printf("this year is not leaf year");
}
    
    return 0;
}