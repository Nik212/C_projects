int ft_atoi(char *str)
{
    int sign = 1;
    int res = 0;
    char base_0 = "0123456789abcdef";
    char base_1 = "0123456789"; // 0 -> 1

    while (*str)
    {
        if (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\f' )
        {
            str++;
        }
        if (*str == '-')
        {
            sign *= -1;
            str++;
        }
        if (*str >= '0' && *str <= '9') 
    }
}

int main()
{
    printf("%s", ft_atoi(42));
}