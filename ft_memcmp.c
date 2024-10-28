/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <anmendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:57:53 by anmendes          #+#    #+#             */
/*   Updated: 2024/10/28 11:04:48 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	if (a == NULL || b == NULL || n == 0)
		return (0);
	while (*a == *b && n--)
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
	
    atoi = ft_memcmp("abcdefghij", "abcdefgxyz", 7);
    printf("\nft_memcmp: %i\n", atoi);
    atoi = memcmp("abcdefghij", "abcdefgxyz", 7);
    printf("   memcmp: %i\n", atoi);
} */