/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <anmendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:34:13 by anmendes          #+#    #+#             */
/*   Updated: 2024/10/28 14:26:03 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_s;
	size_t	len_d;
	size_t	i;
	size_t	j;

	len_s = ft_strlen(src);
	len_d = ft_strlen(dst);
	if (size <= len_d)
		return (len_s + size);
	j = 0;
	i = len_d;
	while (src[j] && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len_s + len_d);
}
