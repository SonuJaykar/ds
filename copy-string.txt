#include<stdio.h>

void main()
{
    char string1[100],string2[100];
    int length = 0;
    gets(string1);
    while (string1[length] != '\0')
    {
        string2[length] = string1[length];
        length = length + 1;
    }
    string2[length] = '\0';
    puts(string2);
}