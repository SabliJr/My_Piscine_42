/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_to_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 10:36:29 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/24 23:17:20 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include "lib.h"

int	find_line(int bytes, char *line, size_t line_len, int fptr);
void	free_m(char *line, int fptr);

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

char	*ft_strdup(char *str)
{
	int		i;
	int		j;
	char	*dest;

	dest = malloc(50 * sizeof(char *));
		if (dest == NULL)
		return NULL;
	i = 0;
	j = 0;
	while (str[i] > 'z' || str[i] < 'a')
		i++;
	while (str[i])
	{
		dest[j] = str[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

int	find_in_file(char *filename, char *search_for)
{
	int		fptr;
	char	*line;
	int		bytes_read;
	size_t	line_len;

	line_len = 0;
	fptr = open(filename, O_RDONLY);
	if (fptr == -1)
	{
		ft_putstr("There was a problem opening the file");
		return (-1);
	}
	line = (char *)malloc(MAX_LEN);
	if (line == NULL)
	{
		ft_putstr("Memory allocation faild");
		close(fptr);
		return (-1);
	}
	bytes_read = read(fptr, &line[line_len], 1);
	find_line(bytes, line, line_len, fptr);
	return (0);
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
}

int	find_line(int bytes, char *line, size_t line_len, int fptr)
{
	while (bytes_read > 0)
	{
		if (line[line_len] == '\n')
		{			
			line[line_len] = '\0';
			if (ft_strstr(line, search_for) == line)
			{
				ft_putstr(ft_strdup(line));
				break ;
			}
			line_len = 0;
		}
		else
		{
			if (line_len < MAX_LEN - 1)
				line_len++;
		}
	}	
	close(fptr);
	free(fptr);
	return (0);
}	
