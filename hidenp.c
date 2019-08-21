int hidenp(char *str1, char *str2)
{
    while (*str2)
    {                   // XYZ XAYBZ  X == X -> Y vs X Y vs Y -> Z vs X Z vs Y Z vs B Z vs Z ok 
        if (*str1 == *str2++)
            str1++;
        if (*str1 == '\0' && *str2 == '\0')
            return (1);
    }
    return (0);
    
}

int main(int argc, char *argv[])
{
    int value;
    if (argc == 3)
    {
        value = hidenp(argv[1], argv[2]);
        if (value)
            write(1, "1", 1);
        else
            write(1, "0", 1);
    }
    else
    
    
    return (0);
}