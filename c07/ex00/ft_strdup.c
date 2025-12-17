#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		lenght;

	lenght = 0;
	while (src[lenght])
		lenght++;
    lenght += 1;
	dest = (char *) malloc(sizeof(char) * lenght);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < lenght)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	*src = "teste";

// 	printf("My: %s\n", ft_strdup(src));
// 	printf("bot: %s\n", strdup(src));
// }