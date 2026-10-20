#include <stdio.h>

int main(){

    // variable = A reusable container for a value.
    //            Behaves as if it were the value it contains.
    
    /*
    int = whole numbers (4 bytes in modern systems)
    float = single-precision decimal number (4 bytes)
    double = double-precision decimal number (8 bytes)
    char = single character (1 bytes)
    char[] = array of characters (size varies)
    bool = true or false (1 byte, requires <stdbool.h>)
    */




    int age = 25;
    int year = 2026;
    int quantity = 2;

    printf("You are %d years old\n", age);
    printf("The year is %d\n", year);
    printf("You have ordered %d x items\n", quantity);

    return 0;
}

