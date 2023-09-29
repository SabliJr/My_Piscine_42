#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + str[i++] - '0';
	return (sign * res);
}

int main(int argc, char *argv[])
{
	(void)argc;
	printf("my atoi %d\n", ft_atoi(argv[1]));
	printf("the lib atoi %d", atoi(argv[1]));
	return (0);
}

