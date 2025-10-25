#include<stdio.h>
int main()
{
    int length,breadth,per,area;
    printf("\n Enter the length and breadth of the rectangle:");
    scanf("%d%d",&length,&breadth);
    per=2*(length+breadth);
    area=length*breadth;
    printf("\n The perimeter is:%d and the area is %d",per,area);

    return 0;}
