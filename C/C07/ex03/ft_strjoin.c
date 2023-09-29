/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:13:28 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/21 20:38:48 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	get_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	all_len;

	i = 0;
	all_len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			all_len++;
			j++;
		}
		if (i < size - 1)
			all_len += ft_strlen(sep);
		i++;
	}
	return (all_len);
}

char	*ft_strcpy(char *new_str, char *strs, int *str_i)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		new_str[*str_i + i] = strs[i];
		i++;
	}
	*str_i += i;
	return (new_str);
}

char	*cool(char *new_str)
{
	new_str = malloc(1);
	new_str[0] = '\0';
	return (new_str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*new_str;
	int		new_str_len;
	int		str_i;

	i = 0;
	str_i = 0;
	new_str = NULL;
	if (size == 0)
		return (cool(new_str));
	new_str_len = get_total_len(size, strs, sep);
	new_str = (char *)malloc(sizeof(char) * new_str_len + 1);
	if (new_str == NULL)
		return (NULL);
	while (i < size)
	{
		ft_strcpy(new_str, strs[i], &str_i);
		if (i < size - 1)
			ft_strcpy(new_str, sep, &str_i);
		i++;
	}
	new_str[str_i] = '\0';
	return (new_str);
}

/*
int	main()
{
	char *a[] = {"This", "", "success"};
	int size = 0;
	printf("%s\n",  ft_strjoin(size, a, "___"));
}
*/
