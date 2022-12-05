#include<stdio.h>

void main()
{
    char string[100];
    int length=0,j,i;
    gets(string);
    while (string[length] != '\0')
    {
        if (string[length] >= 97 && string[length] <= 122)
        {
            string[length] = string[length] - 32;
        }
        else
        {
            string[length] = string[length];
        }
        length = length + 1;
    }
    puts(string);
}