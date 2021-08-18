#include <stdio.h>

int main()
{
    
    float a,z,d,e,f,g;
    
    char b;
    printf("enter your name\n");
    scanf("%s" , &b );
    
    printf("enter roll number\n");
    scanf("%f",&a);

    printf("marks in physics\n");
    scanf("%f", &z);

    printf("marks in chemistry\n");
    scanf("%f", &d);

    printf("marks in computer application\n");
    scanf("%f", &e);

     f=z+d+e;
      g= (f/3);

     printf("total marks %f\n",f);

     printf("percentage is %f %\n", g);

    if (g>=75 )
    {
    printf( "first class");
    }
    else if(g<=35 && g>=74)
    {
        printf( " second class");
    }
else
{
printf("fail");
}
    return 0;
    
}