// Input a string in character array and print string and length of string.

#include<stdio.h>

void main(){
    char str[100];
    int i,count=0;
    printf("Enter a string of length from (0-99) : ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        count++;
    }
    printf("Length of String = %d",count);
}
