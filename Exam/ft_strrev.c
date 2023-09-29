/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:43:12 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/26 16:17:27 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_strrev(char *str);

/*
int main(int argc, char *argv[])
{
	ft_strrev(argv[1]);
	return (0);
}
*/

void ft_strrev(char *str)
{
	int 	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
}
