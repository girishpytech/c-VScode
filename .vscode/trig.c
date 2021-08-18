#include <stdio.h>

int main()
{
    float one, two, three;
    printf("enter first side \n");
    scanf("%f", &one);

    printf("enter second side\n");
    scanf("%f", &two);

    printf("enter three side\n");
    scanf("%f", &three);

    if (one == two && two == three)
    {
        printf("the triangle will be equilateral .... enjoy !!!!!!!!!");
    }
    else if (one == two || two == three || one == three)
    {
        printf("the triangle will be isosceles ..... again ENJOY !!!!!!!");
    }
    else if (one != two || two != three || one != three)
    {
        printf("the triagle is sclene ....... thak gaya hu broo");
    }
   

    return 0;
}
