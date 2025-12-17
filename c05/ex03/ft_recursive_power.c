#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    if (power == 0)
        return (1);
    else if (power < 0)
        return (0);
    else
        return (nb * ft_recursive_power(nb, --power));
}

// int main(void)
// {
//     int nb = -4;
//     int power = 3;

//     printf ("%d\n", ft_recursive_power(nb, power));
//     return(0);
// }