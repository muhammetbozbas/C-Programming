#include <stdio.h>

int main(){
    float gpa = 2.5;
    float price = 19.99;
    float temperature = -10.1;

    printf("Your gpa is %f\n", gpa);
    printf("Your gpa is %.1f\n", gpa);
    printf("Your gpa is %.2f\n", gpa);

    printf("The price is $%f\n", price);
    printf("The price is $%.2f\n", price);

    // Option+Shift+8 ==> °
    printf("The temperature is %f°C\n", temperature);
    return 0;
}