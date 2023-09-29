/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 00:57:17 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/12 14:55:57 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_letter(char c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_word;

	is_word = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((is_word == 1) && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= ('a' - 'A');
		if ((is_word == 0) && (str[i] >= 65 && str[i] <= 90))
			str[i] += ('a' - 'A');
		if ((str[i] >= 48 && str[i] <= 57) || (is_letter(str[i])))
			is_word = 0;
		else
			is_word = 1;
		i++;
	}
	return (str);
}

/*
int main()
{
	char a[] = "saLut, coMment tu vas ? 42Mots qua23rante-deux; cinquante+et+un";

		printf("%s", ft_strcapitalize(a));

	return 0;
}
*/
