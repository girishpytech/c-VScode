#include<stdio.h>

int main(){
    char ab;
    printf("enter the alphabet");
    scanf("%c" , & ab);

    if (ab >= 'A'
     && ab <= 'Z' ){
        printf("it is upper case");
    }
     else if (ab >= 'a' && ab<= 'z')
    {
        printf("IT is Smaller case letter");
    }
    
    else
     {
        printf("its not an alphabet");
    }
    
}