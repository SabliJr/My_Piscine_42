#ifndef LIB_H
# define LIB_H

#define	MAX_LEN 256

void    ft_putchar(char c);
int ft_atoi(char *str);
int ft_strlen(char *str);
void   ft_cut_argv(char *strs, char *filename);
void    ft_atoi_argv(char **av, char *filename);
void   ft_cut(int nb, char *filename);
void   ft_first(int *tab, char *filename, int nb);
int	find_in_file(char *filename, char *search_for);
char	*ft_strstr(char *str, char *to_find);
char *ft_strdup(char *str);
char    *ft_itoa(int nb);
void	ft_putstr(char *str);

#endif