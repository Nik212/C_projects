#include <stdlib.h>

int pgcd(unsigned int nb1, unsigned int nb2)
{
    int max = nb1 >= nb2 ? nb2 : nb1;
    int i = 1;
    int N;
    while (i <= max)
    {
        if (nb1 % i == 0 && nb2 % i == 0)
            N = i;
        i++;
    }
    return (N);
}

int main(int argc, char *argv[])
{
    int nb1 = atoi(argv[1]);
    int nb2 = atoi(argv[2]);
    if (nb1 == 0 || nb2 == 0)
        return (0);
    int value = pgcd(nb1, nb2);
    printf("%d\n", value);
    return (0);
}