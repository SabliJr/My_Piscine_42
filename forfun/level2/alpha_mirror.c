#include <unistd.h>

void	ft_alpha_mirror(char *str);

int	main(int argc, char *argv[])
{
	ft_alpha_mirror(argv[1]);
	return (0);
}

void	ft_alpha_mirror(char *str)
{
	int i;
	char c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c >= 65 && c <= 90)
		{
			c = 'Z' - c + 'A';
			write(1, &c, 1);
		}
		else if (c >= 97 && c <= 122)
		{
			c = 'z' - c + 'a';
			write(1, &c, 1);
		}
		else
		write(1, &c, 1);
		i++;
	}
}
