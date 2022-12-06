#include<stdio.h>

void main()
{
    char string1[100],string2[100];
    int length1 = 0,length2 = 0,flag;

    gets(string1);
    gets(string2);
    while (string1[length1] != '\0')
    {
        length1 = length1 + 1;
    }
    while (string2[length2] != '\0')
    {
        length2 = length2 + 1;
    }
    if (length1 != length2)
    {
        printf("Your String Is Different");
    }
    else
    {
        while (length1 >= 0)
        {
            if (string1[length1] == string2[length1])
            {
                flag = 1;
            }
            length1 = length1 - 1;
        }
        if (flag == 1)
        {
            printf("Your String Is Same");
        }
        else
        {
            printf("Your String Is Different");
        }
    }
}