#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int *array;

    array = (int *) malloc(sizeof(int) * (max - min));
    if (min >= max)
    {
        array = NULL;
        return (0);
    }
    if (array != NULL)
    {
        i = 0;
        while (min < max)
        {
            array[i] = min;
            min++;
            i++;
        }
        *range = array;
        return(1);
    }
    else
        return (-1);
}

// int main(void)
// {
//     int min = 4;
//     int max = 11;
//     int *range;
//     int i = 0;
 
//     ft_ultimate_range(&range, min, max);
//     while (i < (max - min))
//     {
//         printf("%d\n",range[i]);
//         i++;
//     }
//     return (0);
// }