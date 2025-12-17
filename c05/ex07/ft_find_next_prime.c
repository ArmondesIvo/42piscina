#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}

// int main(void)
// {
//     int nb = 7;
//     int nb1 = 8;
//     printf("%d\n", ft_find_next_prime(nb));
// 	printf("%d\n", ft_find_next_prime(nb1));
//     return (0);
// }