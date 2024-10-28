/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <anmendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:35:42 by anmendes          #+#    #+#             */
/*   Updated: 2024/10/28 11:06:03 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	if (a == NULL || b == NULL || n == 0)
		return (0);
	while (*a && *a == *b && n--)
	{
		a++;
		b++;
	}
	if (n)
		return (*a - *b);
	return (0);
}

/* int main(void)
{  
	int atoi;
	
    atoi = ft_strncmp("abcdefghij", "abcdefgxyz", 7);
    printf("\nft_memcmp: %i\n", atoi);
    atoi = strncmp("abcdefghij", "abcdefgxyz", 7);
    printf("   memcmp: %i\n", atoi);
} */