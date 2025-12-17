#include <stdio.h>

int ft_sqrt(int nb)
{
    long	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}

// int main(void)
// {
//     int nb = 0;
//     int nb1 = -2;
//     int nb2 = 3;
//     int nb3 = 25;
//     printf("%d\n", ft_sqrt(nb));
// 	printf("%d\n", ft_sqrt(nb1));
// 	printf("%d\n", ft_sqrt(nb2));
// 	printf("%d\n", ft_sqrt(nb3));
//     return (0);
// }