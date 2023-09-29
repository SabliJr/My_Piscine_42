#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_do_op(char *op, char *num1, char *num2);

int main(int argc, char *argv[])
{
	if (argc == 4)
		ft_do_op(argv[2], argv[1], argv[3]);
	write(1, "\n", 1);
	return (0);
}

void	ft_do_op(char *op, char *num1, char *num2)
{
	int	nb1 = atoi(num1);
	int nb2 = atoi(num2);

	if (op[0] == '/')
			printf("%d\n", (nb1 / nb2));
	else if (op[0] == '*')
			printf("%d\n", (nb1 * nb2));
	else if (op[0] == '-')
			printf("%d\n", (nb1 - nb2));
	else if (op[0] == '%')
			printf("%d\n", (nb1 % nb2));
	else if (op[0] == '+')
		printf("%d\n", (nb1 + nb2));
	else
		write(1, "\n", 1);
}
