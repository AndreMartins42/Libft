/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <anmendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:39:15 by anmendes          #+#    #+#             */
/*   Updated: 2024/10/30 12:09:15 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	temp;

	ptr = (unsigned char *)s;
	temp = (unsigned char)c;
	while (n--)
	{
		if (*ptr == temp)
			return ((unsigned char *)ptr);
		ptr++;
	}
	return (NULL);
}
