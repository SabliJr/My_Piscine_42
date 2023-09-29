#include <unistd.h>
#include <stdio.h>

void ft_inter(char *str1, char *str2);
int check_char(int index, char c, char *str);

int main(int argc, char *argv[])
{
	if (argc == 3)
		ft_inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}

int check_char(int index, char c, char *str)
{
	int i;

	i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void ft_inter(char *str1, char *str2)
{
	int i;
	int j;

	i = 0;
	while (str1[i] != '\0')
	{
		if (check_char(i, str1[i], str1))
		{
			j = 0;
			while (str2[j] != '\0')
			{
				if (str1[i] == str2[j])
				{
					write(1, &str1[i], 1);
					break;
				}
				j++;
			}
		}
		i++;
	}
}
