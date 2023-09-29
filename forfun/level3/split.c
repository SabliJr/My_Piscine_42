#include <stdlib.h>
#include <stdio.h>

int is_sepreater(char c);
char *malloc_word(char *str);
char **ft_split(char *str);
int	count_words(char *str);

int main(int argc, char *argv[])
{
	char **t = ft_split(argv[1]);
	int i = 0;
	//printf("%d\n", count_words(argv[1]));
	while (t[i])
		printf("%s\n", t[i++]);
	return (0);
}

int is_sepreater(char c)
{
	return (c == 32 || (c >= 9 && c <= 13) || ("01234"));
}

int	count_words(char *str)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (is_sepreater(str[i]))
			i++;
		if (str[i])
			count++;
		while (str[i] && !is_sepreater(str[i]))
			i++;
	}
	return (count);
}

char *malloc_word(char *str)
{
	char *word;
	int i;
	
	while (str[i] && !is_sepreater(str[i]))
		i++;
	if (!(word = (char *)malloc(sizeof(char) * (i + 1))))
		return NULL;
	i = 0;
	while (str[i] && !is_sepreater(str[i]))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char **ft_split(char *str)
{
	char **words;
	int i;

	i = 0;
	if (!(words = (char **)malloc(sizeof(char *) * (count_words(str) + 1))))
		return NULL;
	while (*str)
	{
		while (*str && is_sepreater(*str))
			str++;
		if (*str && !is_sepreater(*str))
		{
			words[i] = malloc_word(str);
			i++;
			while (*str && !is_sepreater(*str))
				str++;
		}
	}
	words[i] = '\0';
	return (words);
}
