char	*ft_itoa(int nbr)
{
    char base_sixteen[] = "0123456789ABCDEF";
    int value;
    int len = 0;
    char *p;

    value = nbr;
    while (value != 0)
    {
        value = value / 10;
        len++;
    }
    if (nbr < 0)
        len++;
    value = nbr;
    p = (char *)malloc(sizeof(char)*len + 1);
    p[len] = '\0';

    while (value != 0)
    {
        p[--len] = base_sixteen[value % 10];
        value /= 10;
    }
    return (p);
}

int main()
{
    printf("%s", ft_itoa(42));
}