void ft_putnbr(int nbr)
{
    char c;
    if (nbr >= 10)
    {
        ft_putnbr(nbr / 10);
        ft_putnbr(nbr % 10);
    }
    else
    {
        c = nbr + '0';
        write(1, &c, 1);
    }
}

int main(int argc, char *argv[])
{
    int i;

    i = 1;
    ft_putnbr(argc - 1);
    return (0);
}