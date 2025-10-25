#include<stdio.h>
#include<math.h>
int main(){
    float p,r,t,c_i;
    printf("Enter principal amount, rate, and time:");
    scanf("%f%f%f",&p,&r,&t);
    c_i=p*pow((1+r/100),t)-p;
    printf("The compound interest is:%f",c_i);
    return 0;
}