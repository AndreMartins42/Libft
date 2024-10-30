/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <anmendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:12:39 by anmendes          #+#    #+#             */
/*   Updated: 2024/10/30 12:10:04 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	temp;

	temp = (char)c;
	while (*s)
	{
		if (*s == temp)
			return ((char *)s);
		s++;
	}
	if (temp == '\0')
		return ((char *)s);
	return (NULL);
}
