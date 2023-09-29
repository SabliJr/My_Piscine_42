#include <unistd.h>

void	rot_13(char *str);

int main(int argc, char *argv[])
{
	rot_13(argv[1]);
	return (0);
}

void	rot_13(char *str)
{
	int	i;
	char c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c >= 65 && c <= 90)
		{
			c = 'A' + (c - 'A' + 13) % 26;
			write(1, &c, 1);
		}
		else if (c >= 97 && c <= 122)
		{
			c = 'a' + (c - 'a' + 13) % 26;
			write(1, &c, 1);
		}
		else
			write(1, &c, 1);
		i++;
	}
}
			
