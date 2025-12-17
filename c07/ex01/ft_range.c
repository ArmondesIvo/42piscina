#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
    int i;
    int *value;

    if (min >= max)
    {
        return (NULL);
    }
    i = 0;
    value = (int *) malloc(sizeof(int) * (max - min));
    while (min < (max))
    {
        value[i] = min;
        min++;
        i++;
    }
    return (value);
}

// int main(void)
// {
//     int min = 5;
//     int max = 10;
//     int i = 0;
//     int *value = ft_range(min, max);


//     while (i < (max - min))
//     {
//         printf("%d\n",value[i]);
//         i++;
//     }
//     return (0);
// }