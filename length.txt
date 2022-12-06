#include<stdio.h>

void main()
{
    char string[100];
    int length=0;
    printf("Enter a string:");
    gets(string);
    while (string[length] != '\0')
    {
        length = length + 1;
    }
    printf("%d",length);
}