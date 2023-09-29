/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 22:11:30 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/12 14:42:13 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	is_alphabet(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int	ft_str_is_alpha(char *str)
{
	int	sign;
	int	i;

	sign = 1;
	i = 0;
	if (str[i] == '\0')
		return (sign);
	while (str[i] != '\0')
	{
		if (!(is_alphabet(str[i])))
			sign = 0;
		i++;
	}
	return (sign);
}

/*
int main()
{

	int result;

		result = ft_str_is_alpha("asdf");
    printf("Result: %d\n", result);

		result = ft_str_is_alpha("asdaakld8f");
    printf("Result: %d\n", result);

		result = ft_str_is_alpha("asdf*jwjkj/");
    printf("Result: %d\n", result);

    result = ft_str_is_alpha("QWER)TY");
    printf("Result: %d\n", result);

    result = ft_str_is_alpha("asdf1234");
    printf("Result: %d\n", result);

    result = ft_str_is_alpha("");
    printf("Result: %d\n", result);

	return 0;
}
*/
