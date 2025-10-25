#include<stdio.h>
#include<math.h>
int main(){
    float x,y,z;
    printf("Enter the number:");
    scanf("%f",&x);
    printf("Enter the power:");
    scanf("%f",&y);
    z=pow(x,y);
    printf("answer:%.2f",z);
    return 0;


}