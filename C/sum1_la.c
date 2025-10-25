#include <stdio.h>

int main(){
    int a, first_digit, last_digit;
    printf("Enter a code digit: ");
    scanf("%d",&a);
    last_digit=a%10;
    while(a>=10){
        a=a/10;
        first_digit=a;
    }
    printf("The sum of first and last digit is:%d",first_digit+last_digit);
    return 0;
}