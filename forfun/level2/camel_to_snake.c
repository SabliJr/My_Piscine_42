#include <unistd.h>

void	ft_change_case(char *str);

int	main(int argc, char *argv[])
{
	ft_change_case(argv[1]);
	return (0);
}

void	ft_change_case(char *str)
{
	int	i;
	char c;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			c += 32;
			write(1, "_", 1);
		}
		write(1, &str[i], 1);
		i++;
	}
}
