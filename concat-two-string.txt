#include<stdio.h>

void main()
{
    char string1[50],string2[50],string3[100];
    int length1 = 0,length2 = 0;
    gets(string1);
    gets(string2);
    while (string1[length1] != '\0')
    {
        string3[length1] = string1[length1];
        length1 = length1 + 1;
    }
    while (string2[length2] != '\0')
    {
        string3[length1] = string2[length2];
        length1 = length1 + 1;
        length2 = length2 + 1;
    }
    puts(string3);
}