
int sep_before(char c)
{
    if (c == '\t' || c == '\n' || c == ' ' || c == '\v' || c == '\f'|| c == '\r')
        return (1); // return True
    else 
        return (0); // return False
}

void ft_capitalizer(char *str)
{
    int i;

    if (str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] = str[0] - 32;
        write(1, &str[0], 1);
    }
    else
        write(1, &str[0], 1);
    
    i = 1;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z' && sep_before(str[i-1]))
        {
            str[i] = str[i] - 32;
            write(1, &str[i], 1);
        }
        else if (str[i] >= 'A' && str[i] <= 'Z' && !sep_before(str[i-1]))
        {
            str[i] = str[i] + 32;
            write(1, &str[i], 1);
        }
        else
            write(1, &str[i], 1);
        i++;
    }
}

int		main(int argc, char *argv[])
{
	int		i;

	i = 1;
	while (i < argc)
	{
		ft_capitalizer(argv[i]);
		write(1, '\n', 1);
		i++;
	}
	return (0);
}