char *ft_strcpy(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s2[i] != '\0')
	{
		s1[j] = s2[i];
		j++;
		i++;	
	}
	s1[j] = '\0';
	return (s1);
}

int main()
{

	char kek[] = "kekkeekekkeke";
	char lol[13];
	printf("%s", ft_strcpy(lol, kek));
	return (0);
}
