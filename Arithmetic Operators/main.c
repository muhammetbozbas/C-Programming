#include <stdio.h>

int main() {
    
    //arithmetic operators = + - * / %  ++ --

    int x = 11;
    int y = 3;
    int z = 0;
    
    // z = x + y;
    // z = x - y;
    // z = x * y;
    // z = x / y;  // if we divide by int we have not decimal part ==> 2/3 = 0
    // z = x % y;   //modulus operator 

    //---Augmented Assignment Operators------
    // x++;  //increment operator x = x+1
    // x--;  //decrement operator x = x-1

    // x += 3;  //  x = x+3
    // x -= 3;  //  x = x-3

    // x *= 2;  //  x = x * 2
    // x /= 2;  //  x = x / 2

    printf("%d\n", x);

    return 0;
}