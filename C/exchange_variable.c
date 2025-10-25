#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the value of x and y:");
    scanf("%d%d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("The values of x and y:%d%d",x,y);
    return 0;
}