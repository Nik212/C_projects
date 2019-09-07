char	*ft_itoa_base(int value, int base)
{
    char base_sixteen = "0123456789ABCDEF";
    int nbr; 
    int len;
    char *p;

    nbr = value;
    //count the len of a number to allocate enough memory
    while (nbr != 0)
    {
        nbr = nbr / base;
        len++;
    }
    nbr = value;

    if (nbr < 0)
    {
        if (base == 10)
            len++;
        nbr *= -1;
    }
    // we have counter the num of el-ts required so now we are able to allocate enough memory
    p = (char *)malloc(sizeof(char)*len + 1);
    p[len] = '\0';
    
    while (*p)
    {
        p[--len] = base_sixteen[nbr % base];
        nbr /= base;
    }
    

}

int main()
{
    int num = 20;
    int base = 3;

    ft_itoa_base(num, base);
    return (0);
}