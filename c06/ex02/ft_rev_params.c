#include <unistd.h>

void    ft_show(char c)
{
    write (1, &c,1);
}

int main(int argc, char **argv)
{
    int i;
    int j;
    int l;
    
    i = 0;
    j = 0;
    l = argc -1;
    while (i < argc -1)
    {
        ft_show(argv[l][j]);
        j++;
        if (argv[l][j] == '\0')
        {
            i++;
            j = 0;
            l--;
            write (1, "\n", 1);
        }  
    }
    return (0);
}