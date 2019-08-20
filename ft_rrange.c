#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int *arange;
    int diff = end - start;
    int i;
    int j = 0;

    if (end - start < 0)
        diff *= -1;
    arange = (int *)malloc(sizeof(int)*diff + 1);
    i = end;
    while (j <= diff)
    {
        arange[j] = i;
        printf("%d\n", arange[j]);
        j++;
        if (end <= 0)
            i++;
        else
            i--;
    }
}
int main()
{
  ft_rrange(-5, 5);
    return (0);
}