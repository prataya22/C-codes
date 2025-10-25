#include<stdio.h>
int main(){
    float basic=10000,DA=((50.0/100)*basic),HRA=((15.0/100)*basic),gross_pay;
    gross_pay=basic+DA+HRA;
    printf("\n The gross pay is:%f",gross_pay);
    return 0;
}