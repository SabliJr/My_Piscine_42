/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 10:14:25 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/12 15:11:28 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	str_len;

	str_len = 0;
	if (!dest || !src)
		return (0);
	while (src[str_len] != '\0')
		str_len++;
	if (size > 0)
	{
		i = 0;
		while (i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (str_len);
}

/*
int main()
{
	char a[] = "jkkjrjk";
	char dest[100];
	int len = sizeof(a) / sizeof(char);

	ft_strlcpy(dest, a, len);
	printf("%s", dest);

	return 0;
}
*/
