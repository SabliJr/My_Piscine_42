# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matorgue <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/23 10:45:25 by matorgue          #+#    #+#              #
#    Updated: 2023/09/23 10:47:33 by matorgue         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all : prog

prog : main.o atoi.o ft_putchar.o ft_strlen.o cut_argv.o cut.o write_to_file.o itoa.o
	cc -o rush-02 main.o atoi.o ft_putchar.o ft_strlen.o cut_argv.o cut.o write_to_file.o itoa.o

main.o : main.c
	cc -o main.o -c main.c -Werror -Wall -Wextra

ft_putchar.o : ft_putchar.c
	cc -o ft_putchar.o -c ft_putchar.c -Werror -Wall -Wextra

atoi.o : atoi.c
	cc -o atoi.o -c atoi.c -Werror -Wall -Wextra 

ft_strlen.o : ft_strlen.c
	cc -o ft_strlen.o -c ft_strlen.c -Werror -Wall -Wextra 

cut_argv.o : cut_argv.c
	cc -o cut_argv.o -c cut_argv.c -Werror -Wall -Wextra

cut.o : cut.c
	cc -o cut.o -c cut.c -Werror -Wall -Wextra 

write_to_file.o : write_to_file.c 
	cc -o write_to_file.o -c write_to_file.c -Werror -Wall -Wextra

itoa.o : itoa.c 
	cc -o itoa.o -c itoa.c -Werror -Wall -Wextra


fclean :
	rm -rf *.o

