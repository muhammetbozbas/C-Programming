#include <stdio.h>

int main(){

    double pi = 3.14159543759;
    double e = 2.7182832545390;

    printf("The value of pi is %lf\n", pi);  // %lf ==> long float
    printf("The value of pi is %.15lf\n", pi);  // 3.141595437590000
    
    printf("The value of e is %.15lf\n", e);  

    
    
    return 0;
}