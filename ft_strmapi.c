/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <anmendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:46:35 by anmendes          #+#    #+#             */
/*   Updated: 2024/10/28 17:57:43 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* # include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <stddef.h> */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	i;
	int	len;
	char	*new;

	len = strlen(s);
	new = (char *)malloc(sizeof(char) * len + 1);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

/* char f(unsigned int i, char c)
{
	char str;
	str = c + 1;
	return (str);
}

int main()
{
	char str1[] = "abc";
	char* str2;
	str2 = ft_strmapi(str1, *f);
	printf("%s\n", str2);
} */