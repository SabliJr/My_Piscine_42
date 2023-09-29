
#include <stdlib.h>
#include "lib.h"
#include <stdio.h>

char    *ft_itoa(int nb)
{
    char    *dest;
    int     i;
    char    temp;

    i = 0;
    if (!(dest = malloc(4 *sizeof(char *))))
        return (0);
    while (nb > 9)
    {
        dest[i] = nb % 10 + '0';
        nb /= 10;
        i++;
    }
    dest[i] = nb + '0';
    dest[i + 1] = '\0';
    i = 0;
    temp = dest[i];
    dest[i] = dest[ft_strlen(dest) - 1 - i];
    dest[ft_strlen(dest) - 1 - i] = temp;
    return (dest);
}
