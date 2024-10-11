#include <stdio.h>

int main() {
    int x;
    printf("Enter ur age:");
    scanf("%d",&x);
    if(x>=18){
        printf("You are eligible to vote");
    }
    else{
        printf("U r not eligible to vote");
    }

    return 0;
}