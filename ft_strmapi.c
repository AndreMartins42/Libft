/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <anmendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:46:35 by anmendes          #+#    #+#             */
/*   Updated: 2024/10/30 11:58:13 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len_s;
	char	*new;

	len_s = ft_strlen(s);
	new = (char *)malloc(sizeof(char) * len_s + 1);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < len_s)
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
