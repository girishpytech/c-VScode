#include<stdio.h>

int main(){
    int a;
    printf("input the number you want to check...");

    scanf("%d" ,&a);

    
    
    if (a < 0){
        printf("the number you gave is NEGATIVE\n");
    }
    if(a == 0){
        printf("the number is ZERO\n");
    }
    else
{
    
        printf("the number you gave is POSITIVE\n");
}
    return 0;


}

