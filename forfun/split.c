#include <stdio.h>
#include <stdlib.h>

char **split(char *str, char *charset);
char	*find_char(char *str, char c);
int	word_counter(char *str, char *charset);
char *ft_strncpy(char *des, char *src, int n);

int main(int argc, char **argv) {
//     char *input_string = "This, is;a.string,split-test_and-more!";
//     char *charset = ",;.- _";
   	char **result;
    if (argc == 3)
    	result = split(argv[1], argv[2]);
    
    // Print the tokens
    for (int i = 0; result[i] != NULL; i++) {
        printf("%s\n", result[i]);
    }
    
    
    return 0;
}

char	*find_char(char *str, char c)
{
	while (*str != '\0')
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	return (NULL);
}

int	word_counter(char *str, char *charset)
{
	int	u;
	int	word_num;

	u = 0;
	word_num = 0;
	while (str[u] != '\0')
	{
		if (find_char(charset, str[u]))
			word_num++;
		u++;
	}
	return (word_num);
}

char *ft_strncpy(char *des, char *src, int n)
{
	int	k;

	k = 0;
	while (src[k] != '\0' && k < n)
	{
		des[k] = src[k];
		k++;
	}
	while (k < n)
		des[k++] = '\0';
	return (des);
}

char **split(char *str, char *charset)
{
	char	*new_str;
	char	*prev_word;
	char	**res;
	int		word_i;
	int		word_len;
	int		word_count;

	new_str = str;
	word_count = word_counter(new_str, charset);
	word_len = 0;
	word_i = 0;
	if (!(res = (char **)malloc(sizeof(char *) * (word_count + 1))))
		return (NULL);
	prev_word = str;
	new_str = str;
	while (*new_str)
	{
		if (find_char(charset, *new_str))
		{
			if (new_str != prev_word)
			{
				word_len = new_str - prev_word;
				if (!(res[word_i] = (char *)malloc(sizeof(char) * (word_count + 1))))
					return (NULL);
				ft_strncpy(res[word_i], prev_word, word_len);
				res[word_i][word_len] = '\0';
				word_i++;
			}
			prev_word = new_str + 1;
		}
		new_str++;
	}
	if (new_str != prev_word)
	{
		word_len = new_str - prev_word;
		if (!(res[word_i] = (char *)malloc(sizeof(char) * (word_len + 1))))
			return (NULL);
		ft_strncpy(res[word_i], prev_word, word_len);
		res[word_i][word_len] = '\0';
		word_i++;
	}
	res[word_count] = NULL;
	return (res);
}	
