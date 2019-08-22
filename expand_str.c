#include <unistd.h>

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
            printf("   ");
            str++;
        }
        else if ((*(str + 1) == '\0') && *str == ' ')
            str++;
        else if (*str >= 32 && *str <= 126)
            printf("%c", *str++);
    }
}
}

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        tab_replacer(argv[1]);
    }
    else
        write(1, "\n", 1);
    return (0);
}