#include <stdio.h>

int main()
{
    int a, b, c;
    printf("enter first number\n");
    scanf("%d", &a);
    printf("enter sceond numner\n");
    scanf("%d", &b);

    printf("enter third number\n");
    scanf("%d", &c);

    if (a < b && a < c)
    {
        printf("the smallest number is %d", a);
    }
    else if (b < a && b < c)
    {
        printf("the smallest number is %d", b);
    }
    else if (c < a && c < b)
    {
        printf("the smallest number is %d", c);
    }

    else
    {
        printf("the three numbers are equal..");
    }
    return 0;
}
