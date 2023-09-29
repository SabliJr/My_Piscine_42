#include <unistd.h>

int count_wch(char *str);

int main(int ac, char **av)
{
		(void)ac;
	__builtin_printf("%d\n", count_wch(av[1]));
	write(1, "\n", 1);

	return 0;
}

int count_wch(char *str)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == 32)
			i++;
		if (str[i])
			count++;	
		while (str[i] != 32 && str[i] != '\0')
			i++;
	}
	return (count);
}
			
