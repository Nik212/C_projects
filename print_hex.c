
int ft_atoi(char *str)
{
    int sign = 1;
    int result = 0;
    while (*str)
    {
        if (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\f' || *str == '\r')
            str++;
        if (*str == '-')
            {
                sign *= -1;
                str++;
            }
        if (*str >= '0' && *str <= '9')
        {
            result = result * 10 + *str++ - '0';
        }
    }
    return (result * sign);
}

void print_hex(int n)
{
    if (n >= 16)
        print_hex(n/ 16)
    n %= 16;
    n += n < 10 ? '0' : 'A' - 10;
    write(1, &n, 1);
    
    
}

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        print_hex(ft_atoi(argv[1]));
    }
    else
        write(1, "\n", 1);
}