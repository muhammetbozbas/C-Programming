#include <stdio.h>
#include <string.h>

int main(){
    
    int age = 0;
    float gpa = 0.0f; //f's mean gpa must be float character not be integer
    char grade = '\0'; //null terminator ==> \0
    char name[30] = "";  //name can has max 30 character

    printf("Enter your age: ");
    scanf("%d", &age);  // with using & we say age's address basically

    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");   //if we don't use a blank before %c, the program does not wait us to enter something.
    scanf(" %c", &grade);

    getchar();  //it clears input buffer. We should use it while using fgets
    printf("Enter your full name: ");
    //scanf("%s", &name); //we cannot use scanf when we want to write two words. Scanf cant read blanks
    //fgets(name, 30, stdin);  // f get string function. fgets(variable, size, standartinput)
    //if we change the max size of variable, we have to change it manually in fgets func. The other option is:
    fgets(name, sizeof(name), stdin);
    /* 
    this function has a newline character at the end.
    we need to add a header called <string.h>
    and with using string we can remove the \n at the end of the output.
    */
    name[strlen(name) - 1] = '\0';


    printf("%s\n", name);
    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);

    // return 0;
}