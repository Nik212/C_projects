void reverser(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
	else if (*c >= 'A' && *c <= 'Z')
		*c = *c + 32;
	write(1, c, 1);
}

int main(int argc, char *argv[])
{
	int j;

	if (argc == 2)
	{
		j = 0;
		while (argv[1][j] != '\0')
		{
			reverser(&argv[1][j]);
			j++;
		}
		write(1, "\n", 1);
	}
	else
		write(1,"\n",1);
}
