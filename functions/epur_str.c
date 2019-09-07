#include <stdio.h>

void tab_replacer(char *str)
{
    while (*(str) == ' ')
    {
        str++;
    }
    while (*str)
    {
        if (*(str + 1) != ' ' && *str == ' ' && *(str + 1) != '\0')
        {
            printf(" ");
            str++;
        }
        else if ((*(str + 1) == '\0') && *str == ' ')
            str++;
        else if (*str >= 32 && *str <= 126)
            printf("%c", *str++);
    }
}
int main(int argc, char *argv[])
{
    int i;

    i = 0;
    if (argc == 2)
    {
        tab_replacer(argv[1]);
        printf("\n");
    }
    else
    {
        printf("\n");
    }
    return (0);
}