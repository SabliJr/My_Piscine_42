#include <unistd.h>

void	ft_repeat(char *str);
void	ft_putnchar(char c, int i);

int	main(int argc, char *argv[])
{
	ft_repeat(argv[1]);
	return (0);
}

void	ft_repeat(char *str)
{
	int i;
	char c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c >= 65 && c <= 90)
			ft_putnchar(c, (c + 1 - 'A'));
		else if (c >= 97 && c <= 122)
			ft_putnchar(c, (c + 1 - 'a'));
		else
			write(1, &c, 1);
		i++;
		}
}

void	ft_putnchar(char c, int i)
{
	while (i >= 0)
	{
		write(1, &c, 1);
		i--;
	}
}
