char **ft_putch(char *str, char **p)
{
  int i = 0;
  int j = 0;
  int m = 0;
    while (str[i] != '\0')
    {
      if (str[i] >= 33 && str[i] <= 122)
      {
        while (str[i] >= 33 && str[i] <= 122 && (str[i+1] != ' ' || str[i+1] != '\0'))
        {
          p[j][m] = str[i];
          m++;
          i++;
        }
        p[j][m] = '\0';
        m = 0;
        j++;
      }
      else
        i++;
    }
    return (p);
}

int main()
{
    char str[] = "test kek lol a";
    int i;
    char **p;
    i = 0;
    int count = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
            i++;
        else if ((str[i] >= 33 && str[i] <= 122  && str[i+1] == ' ') || (str[i] >= 33 && str[i] <= 122 && str[i+1] == '\0'))
        {
          i++;
          count++;
        }
        else
          i++;
  }
    i = 0;
    p = (char**)malloc(sizeof(char *) * count);
    int counter = 1;
    int j = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 33 && str[i] <= 122)
        {
          printf("%c", str[i]);
          counter++;
          if (str[i+1] == ' ' || str[i+1] == '\0')
          {
            p[j] = malloc(sizeof(char)*counter);
            j++;
            counter = 1;
          }
          i++;
        }
        else
          i++;
    }
    return (ft_putch(str, p));
}