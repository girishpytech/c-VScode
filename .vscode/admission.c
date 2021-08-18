#include <stdio.h>
int main()

{
    int a, b, c, d, e;
    printf("enter maths marks:\n");
    scanf("%d", &a);
    printf("enter physics marks:\n");
    scanf("%d", &b);
    printf("enter the marks of chemistry:\n");
    scanf("%d", &c);
    if (a > 100 || b > 100 || c > 100)
    {
        printf("enterd marks are invalid\n");
    }

    else
    {

        d = a + b + c;
        e = a + b;

        printf("total marks in al three subjects : %d \n", d);
        printf("total marks in maths & physics : %d\n", e);

        if (a >= 65 && b >= 55 && c >= 50 && d >= 190 || e >= 140)
        {
            printf("Congratulations !! you are eligible for the admission process....\n");
        }
        else
        {
            printf("sorry,unfortunately you are not eligible for the admission process... try hard !!! \n");
        }
    }
    return 0;
}
