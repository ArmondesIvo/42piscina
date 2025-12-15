#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = nb -1;
	while (i > 0)
	{
		nb *= i;
		i--;
	}
	return (nb);
}

// int	main(void)
// {
// 	int	nb = 5;

// 	printf("%d\n", ft_iterative_factorial(nb));
// 	return (0);
// }
