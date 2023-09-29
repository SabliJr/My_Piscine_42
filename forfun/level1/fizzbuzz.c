#include <unistd.h>

void ft_fizzbuzz();
void ft_putnum(int nb);

int		main()
{
	ft_fizzbuzz();
	return 0;
}

void ft_putnum(int nb)
{
	char num[11] = "0123456789";
	if (nb > 9)
		ft_putnum(nb / 10);
	write(1, &num[nb % 10], 1);
}

void ft_fizzbuzz()
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fuzz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putnum(i);
		write(1, " ", 1);
		i++;
	}
}
