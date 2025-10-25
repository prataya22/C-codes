#include <stdio.h>

int main(){
    char ch=' ';
    printf("The character is %c\n",ch);
    printf("The ASCII value of character is:%d\n",ch);
    if(ch>=97&&ch<=122)
    printf("%c is a lowercase\n",ch);
    else{
        printf("%c is not a lowercase\n",ch);
    }
    return 0;
}