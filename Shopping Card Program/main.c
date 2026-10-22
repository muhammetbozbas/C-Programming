#include <stdio.h>
#include <string.h>

int main(){

    // Shopping Card Program

    char item[50] = " ";
    float price = 0.0f;
    int piece = 0;
    float total = 0.0f;
    char currency = '$';

    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';  //get rid of newline character.
    // scanf("%s", &item);

    printf("What is the price for each?: ");
    scanf("%f", &price);

    printf("How many would you like?: ");
    scanf("%d", &piece);

    total = price * piece;

    printf("\nYou have bought %d %s(s)!\n", piece, item);
    printf("The total is: %c%.2f\n", currency, total);

    return 0;
}