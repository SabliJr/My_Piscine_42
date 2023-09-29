/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 08:34:25 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/12 14:35:55 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


int		main()
{
	char dest[] = "Epic fail";
	char src[] = "Success";
	printf("Must all be same (3 lines):\n%s\n%s\n%s\n", src, ft_strcpy(dest, src), dest);
	char dest1[] = "";
	char src1[] = "";
	ft_strcpy(dest1, src1);
}

