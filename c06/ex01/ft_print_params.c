#include <unistd.h>

void    ft_show(char c)
{
    write (1, &c,1);
}

int main(int argc, char **argv)
{
    int i;
    int j;
    
    i = 1;
    j = 0;
    while (i < argc && argv[i][j])
    {
        ft_show(argv[i][j]);
        j++;
        if (argv[i][j] == '\0')
        {
            i++;
            j = 0;
            write (1, "\n", 1);
        }  
    }
    return (0);
}