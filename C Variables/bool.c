#include <stdio.h>
#include <stdbool.h>

int main(){
    
    bool isOnline = true; //true = 1
    bool isStudent = false;  // false = 0
    bool forSale = true;

    printf("%d\n", isOnline);

    if(isOnline){
        printf("You are ONLINE\n");
    }
    else{
        printf("You are OFFLINE\n");
    }


    if(isStudent){
        printf("You are a student\n");
    }
    else{
        printf("You are not a student\n");
    }


    if(forSale){
        printf("That item is for sale\n");
    }
    else{
        printf("That item is not for sale\n");
    }

    return 0;
}