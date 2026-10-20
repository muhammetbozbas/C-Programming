#include <stdio.h>

int main(){
    // Format specifier = Special tokens that begin with a % symbol,
    //                    followed by a character that specifies the 
    //                    data type and optional modifiers (width, precision,flags).
    //                    They control how data is displayed or interpreted.

    //witdh

    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    // lets specify the number of the character print (min width the display)
    printf("%3d\n", num1);  //at least 3 characters
    printf("%3d\n", num2);
    printf("%3d\n\n", num3);

    printf("%-4d\n", num1); //spaces are in right of the numbers
    printf("%-4d\n", num2);
    printf("%-4d\n\n", num3);

    printf("%03d\n", num1);  //spaces will be 0
    printf("%03d\n", num2);
    printf("%03d\n\n", num3);

    printf("%+d\n", num1); //spaces will be + or -
    printf("%+d\n", num2);
    printf("%-d\n", num3);  
    
    
    return 0;
}