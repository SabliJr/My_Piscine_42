#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int	main(int argc, char *argv[])
{
	printf("%d\n", ft_atoi(argv[1]));
	printf("Sys atoi res %d\n", atoi(argv[1]));
	return 0;
}

int	ft_atoi(char *str)
{
	int i;
	int res;
	int sign;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + str[i++] - '0';
	return (res * sign);
}
