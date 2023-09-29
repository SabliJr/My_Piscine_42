#include "lib.h"
#include <stdlib.h>

void   ft_cut_argv(char *strs, char *filename)
{
    char    **str;
    int     i;
    int     j;
    int     nb;

    str = (char **) malloc (sizeof(char) * 500);
    nb = ft_strlen(strs) / 3 ;
    i = ft_strlen(strs) - 1;
    while (nb >= 1)
    {
        str[nb] = (char *) malloc (sizeof(char) * 4);
        j = 2;
        while(j >= 0)
        str[nb][j--] = strs[i--];
        nb--;
    }
    j = i;
    str[nb] = (char *) malloc(sizeof(char) * i + 1);
    while(i >= 0)
        str[nb][j--] = strs[i--];
    ft_atoi_argv(str, filename);
}

void    ft_atoi_argv(char **av, char *filename)
{
    int tab[13];
    int i;

    i = 0;
    while(av[i])
    {
        tab[i] = ft_atoi(av[i]);
        i++;
    }
   ft_first(tab, filename, i); 
}