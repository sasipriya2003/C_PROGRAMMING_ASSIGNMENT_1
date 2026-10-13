#include<stdio.h>

int main(){
    int number = 1;

    switch(number){
        case 1:
            printf("Hello..\n");
            break;
        case 2:
            printf("Vanakkam...\n");
            break;       
        case 3:
            printf("Namaste..\n");
            break;
        default:
            printf("Japanese Hello...\n");
    }
    return 0;
}