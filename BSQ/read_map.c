/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:12:16 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/25 16:17:00 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	read_file(char *filename)
{
	int fptr;
	int bytes_read;
	size_t line_len;
	char *buff;

	line_len = 0;
	fptr = open(filename, O_RDONLY)
	if (fptr < 0)
		return (NULL):
	if (!(buff = malloc(256 * sizeof(char))
		return (NULL);

		
