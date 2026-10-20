#include <stdio.h>

int main(){
    // Format specifier = Special tokens that begin with a % symbol,
    //                    followed by a character that specifies the 
    //                    data type and optional modifiers (width, precision,flags).
    //                    They control how data is displayed or interpreted.

    int age = 25;               //%d
    float price = 19.99;        //%f or %lf
    double pi = 3.1415926535;   //%f or %lf
    char currency = '$';        //%c
    char name[] = "Muhammet";   //%s

    printf("%d\n",age);  //d means decimal
    printf("%f\n", price);
    printf("%lf\n", pi);
    printf("%c\n", currency);
    printf("%s\n", name);

    return 0;
}