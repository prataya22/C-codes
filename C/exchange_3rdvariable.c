#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter the value x and y:");
    scanf("%d%d",&x,&y);
    z=x;
    x=y;
    y=z;
    printf("The value of x and y:%d%d",x,y);
    return 0;
}