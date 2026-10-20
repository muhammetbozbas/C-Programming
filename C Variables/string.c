#include <stdio.h>

int main(){

    char name[] = "Muhammet";
    char food[] = "Pizza";  // if we use multicharacter, we need to use double ""
    char email[] = "fake123@gmail.com";

    printf("Hello %s\n", name);
    printf("My favorite food is %s\n", food);
    printf("Your email is %s\n", email);
    return 0;
}