/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <anmendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:38:30 by anmendes          #+#    #+#             */
/*   Updated: 2024/10/28 15:39:56 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*temp;
	char	cc;

	cc = (char)c;
	temp = NULL;
	while (*s)
	{
		if (*s == cc)
			temp = (char *)s;
		s++;
	}
	if (cc == '\0')
		return ((char *)s);
	return (temp);
}
