#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int i;
    int n;

    n = nb;
    i = 1;
    if (power == 0)
        return (1);
    else if (power < 0)
        return (0);
    while (i < power)
    {
        n *= nb;
        i++;
    }

    return (n);
}

// int main(void)
// {
//     int nb = 4;
//     int power = 3;

//     printf ("%d\n", ft_iterative_power(nb, power));
//     return(0);
// }