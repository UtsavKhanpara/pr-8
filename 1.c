#include <stdio.h>

void main()
{
    char string[30];
    char *ptr = string;
    int len = 0;
    printf("Enter any string:-");
    scanf("%[^\n]", &string);
    while (*ptr != '\0')
    {
        len++;
        ptr++;
    }
    printf("\nThe length of string is :- %d \n", len);
}
