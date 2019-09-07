void ft_putchar(char c)
{
	int j;

	if (c >= 'a' && c <= 'z')
	{
		j = c - 'a';
		while (j >= 0)
		{
			write(1, &c, 1);
			j--;
		}
	}
	else if (c >= 'A' && c <= 'Z')
	{
		j = c - 'A';
		while (j >= 0)
		{
			write(1, &c, 1);
			j--;
		}	
	}
	else
		write(1, &c, 1);
}
int main(int argc, char *argv[])
{
	int j;

	j = 0;
	if (argc == 2)
	{
		while (argv[1][j] != '\0')
		{
			ft_putchar(argv[1][j]);
			j++;		
		}
		write(1, "\n", 1);
	}
	else
	write(1, "\n", 1);
	return (0);
}
