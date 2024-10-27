#include <stdlib.h>
#include <stdio.h>

int		count_words(char *str, char c);
char	*malloc_word(char *str, char c);
char	**ft_split(char *str, char c);
void    ft_free(char **array, int len);

int		main(void)
{
	char **array;
	int  i;

 	char *phrase = "andre luiz mendes martins";
 	array = ft_split(phrase, ' ');
	i = 0;
	while (array[i] != NULL)
	{
		printf("%s\n", array[i]);
		i++;
	}

}

int		count_words(char *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str && *str != c)
		{
			count++;
			while (*str && *str != c)
				str++;
		}
	}
	return (count);
}

char	*malloc_word(char *str, char c)
{
	char *word;
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != c)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

void    ft_free(char **array, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

char	**ft_split(char *str, char c)
{
	char **array;
	int i;

	array = (char **)malloc(sizeof(char *) * (count_words(str, c) + 1));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str && *str != c)
		{
			array[i] = malloc_word(str, c);
			if (array[i] == NULL)
			{
				ft_free(array, i);
				return (NULL);
			}
			i++;
			while (*str && *str != c)
				str++;
		}
	}
	array[i] = NULL;
	return (array);
}
