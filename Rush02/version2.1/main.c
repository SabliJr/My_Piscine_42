/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 22:39:43 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/24 22:39:46 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "lib.h"

int	main(int argc, char **argv)
{
	char	*fp;

	fp = "numbers.txt";
	if (argc == 3)
		fp = argv[2];
	ft_cut_argv(argv[1], fp);
	return (0);
}
