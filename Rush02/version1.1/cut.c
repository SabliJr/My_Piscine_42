#include "lib.h"
#include <stdio.h>

void   ft_first(int *tab, char *filename, int nb)
{
    int i;

    i = 0;
    while (tab[i])
    {
        ft_cut(tab[i], filename);
        if (nb > 1)
        {
            find_in_file(filename,ft_itoa(1000));
        }
        i++;
        nb--;
    }
}

void    ft_cut(int  nb, char *filename)
{
    int     nbr;

    nbr = 0;
    printf("%d\n", nb);

    if (nb > 100)
    {
        nbr = nb - (nb % 100);
        find_in_file(filename, ft_itoa(nbr / 100));
        find_in_file(filename, ft_itoa(100));
        nb = nb - nbr;
        printf("%d\n", nb);
    }
    if (nb > 20 && nb % 10 != 0)
    {
        nbr = nb - (nb % 10);
        printf("%d\n", nbr);
        find_in_file(filename,ft_itoa(nbr));
        find_in_file(filename, ft_itoa(nb % 10));
        return ;
    }
    if (nb != 0)
        find_in_file(filename, ft_itoa(nb));
}
/*void   ft_cut(int nb, char *filename)
{
    int cal;
    int cal2;

    cal = 0;
    cal2 = 0;
    printf("%d\n", nb);
    if (nb >= 100)
    {
        cal = nb / 100;
        printf("%d\n", cal);
        if (cal == 1)
            find_in_file(filename,"100");
        else
        {
            find_in_file(filename,ft_itoa(cal));
            find_in_file(filename,"100");
        }
        nb = nb - (cal2 * cal);
    }
    else if (nb > 20 && nb % 10 != 0)
    {
        cal = nb % 10;
        cal = nb - cal;
        find_in_file(filename,ft_itoa(cal));
        find_in_file(filename,ft_itoa(nb % 10));
    }
    else 
        find_in_file(filename,ft_itoa(nb));
}*/