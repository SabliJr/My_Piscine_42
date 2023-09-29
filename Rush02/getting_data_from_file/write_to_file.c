/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_to_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 10:36:29 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/24 14:22:39 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>

#define	MAX_LEN 256

void	ft_putstr(char *str);
int	find_in_file(char *filename, char *search_for);
char	*ft_strstr(char *str, char *to_find);
int	is_latter(char c);

int	main(int argc, char *argv[])
{
	char *fp;

	fp = "numbers.txt";
	char line[1000];

	find_in_file(fp, argv[1]);	
	
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (to_find[j] && (str[i + j] == to_find[j]))
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		else
		{
			j = 0;
			i++;
		}
	}
	if (to_find[j] == '\0')
		return (str + i);
	return (0);
}

int	find_in_file(char *filename, char *search_for)
{
	int	fptr;
	char	*line;
	int	bytes_read;
	int line_len;
	int	found;
	int	x;

	found = 0;
	x = 0;
	line_len = 0;
	fptr = open(filename, O_RDONLY);
	if (fptr == -1)
	{
		ft_putstr("There was a problem opening the file");
		return -1;
	}

	if (!(line = (char *)malloc(MAX_LEN)))
	{
		ft_putstr("Memory allocation faild");
		close(fptr);
		return -1;
	}
	while ((bytes_read = read(fptr, &line[line_len], 1)) > 0)
	{
		if (line[line_len] == '\n')
		{
			line[line_len] = '\0';
			if (ft_strstr(line, search_for) == line)
			{
				//printf("%d\n", line_len);
				//if (is_latter(*line))
				ft_putstr(line);
				found = 1;
				break;
			}
			line_len = 0;
		}
		else
		{
			if (line_len < MAX_LEN - 1)
				line_len++;
			else
			{
				ft_putstr("Line length exceeded the maximum");
				free(line);
				close(fptr);
				return 1;
			}
		}
	}	
	if (!found)
		ft_putstr("No data found");
	free(line);
	close(fptr);
	return 0;
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	is_latter(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
