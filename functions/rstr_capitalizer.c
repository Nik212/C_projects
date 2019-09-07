void capitalizer(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == ' ')
          i++;
        else if (str[i-1] == ' ' && (str[i] >= 'a' && str[i] <= 'z') && str[i+1] == ' ')
          str[i]  = str[i] - 32;
        else if ((str[i] >= 'a' && str[i] <= 'z') && (str[i+1] == ' ' || str[i+1] == '\0'))
        {
          str[i] = str[i] - 'a' + 'A';
          i++;
        }
        else if (str[i-1] == ' ' && (str[i] >= 'A' && str[i] <= 'Z') && str[i+1] == ' ')
        {
          i++;
        }
        else if ((str[i] >= 'A' && str[i] <= 'Z') && (str[i+1] != ' ' && str[i+1] != '\0'))
          str[i++] += 32;
        else
          i++;
    }
}

void check(char *str)
{
    while (*str)
        write(1, str++, 1);
}

int main(int argc, char *argv[])
{
    int i;

    i = 1;
    while (i < argc)
    {
        capitalizer(argv[i]);
        check(argv[i++]);
    }
    return (0);
}