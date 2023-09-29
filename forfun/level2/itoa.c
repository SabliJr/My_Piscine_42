#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int count_size(int nbr);
char *ft_itoa(int nbr);
void ft_putnbr(int nb, char *str, int *i);

int main ()
{
	printf("The size is %d\n", count_size(-12345678));
	printf("%s\n", ft_itoa(-2147483648));
	return (0);
}

int count_size(int nbr)
{
	int count;

	count = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

void ft_putnbr(int nb, char *str, int *i)
{
	long int lnbr;

	lnbr = nb;
	if (lnbr < 0)
	{
		str[*i] = '-';
		lnbr = -lnbr;
		*i += 1;
	}
	if (lnbr >= 0 && lnbr <= 9)
	{
		str[*i] = lnbr + '0';
		*i += 1;
	}
	if (lnbr > 9)
	{
		ft_putnbr(lnbr / 10, str, i);
		str[*i] = lnbr % 10 + '0';
		*i += 1;
	}
} 

char *ft_itoa(int nbr)
{
	int len;
	int i;
	char *str;

	len = count_size(nbr);
	if (nbr < 0)
		str = (char *)malloc(sizeof(char) * (len + 2));
	else
		str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return NULL;

	i = 0;
	ft_putnbr(nbr, str, &i);
	str[i] = '\0';
	return (str);
}
