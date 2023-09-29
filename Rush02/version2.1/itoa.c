/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 22:35:53 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/24 22:38:08 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "lib.h"
#include <stdio.h>

char	*ft_itoa(int nb)
{
	char	*dest;
	int		i;
	char	temp;

	i = 0;
	dest = malloc(4 * sizeof(char *));
	if (dest == NULL)
		return (0);
	while (nb > 9)
	{
		dest[i] = nb % 10 + '0';
		nb /= 10;
		i++;
	}
	dest[i] = nb + '0';
	dest[i + 1] = '\0';
	i = 0;
	temp = dest[i];
	dest[i] = dest[ft_strlen(dest) - 1 - i];
	dest[ft_strlen(dest) - 1 - i] = temp;
	return (dest);
}
