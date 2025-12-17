#include <stdio.h>

int ft_fibonacci(int index)
{
    if (index < 0)
        return (-1);
    else if (index == 0)
        return (0);
    else if (index == 1)
        return (1);
    return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// int main(void)
// {
//     printf("negative %d\n", ft_fibonacci(-5));
// 	printf("0º %d\n", ft_fibonacci(0));
// 	printf("1º%d\n", ft_fibonacci(1));
// 	printf("2º%d\n", ft_fibonacci(2));
// 	printf("3º%d\n", ft_fibonacci(3));
// 	printf("4º%d\n", ft_fibonacci(4));
// 	printf("5º%d\n", ft_fibonacci(5));
// 	printf("6º%d\n", ft_fibonacci(6));
// 	printf("7º%d\n", ft_fibonacci(7));
// 	printf("8º%d\n", ft_fibonacci(8));
// 	printf("9º%d\n", ft_fibonacci(9));
// 	printf("10º%d\n", ft_fibonacci(10));
//     return (0);
// }