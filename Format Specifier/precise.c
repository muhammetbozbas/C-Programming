#include <stdio.h>

int main(){
    // Format specifier = Special tokens that begin with a % symbol,
    //                    followed by a character that specifies the 
    //                    data type and optional modifiers (width, precision,flags).
    //                    They control how data is displayed or interpreted.

    // precision, flags

    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.001;

    // we can adjust there will be how many digits after comma with using dot
    printf("%.2f\n", price1);
    printf("%.1f\n", price2);
    printf("%.3f\n\n", price3);

    // if the number originally positive we cannot put - before number; otherwise we can
    printf("%+7.2f\n", price1);
    printf("%+7.2f\n", price2);
    printf("%+7.2f\n", price3);


    
    
    return 0;
}