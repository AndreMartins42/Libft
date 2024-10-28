/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <anmendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:33:24 by anmendes          #+#    #+#             */
/*   Updated: 2024/10/28 18:07:22 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptr2;

	if (!dest && !src)
		return (dest);
	ptr = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	while (n--)
		*ptr++ = *ptr2++;
	return (dest);
}
