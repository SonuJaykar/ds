#include<stdio.h>

void main()
{
    char string1[100],string2[100];
    int length1 = 0,length2 = 0,i;
    gets(string1);
    while (string1[length1] != '\0')
    {
        length1 = length1 + 1;
    }
    while (length1 >= 0)
    {
        string2[length2] = string1[length1];
        length1 = length1 - 1;
        length2 = length2 + 1;
    }
    string2[length2] = '\0';
    for (i = 0;i <= length2;i++)
    {
        printf("%c",string2[i]);
    }
}