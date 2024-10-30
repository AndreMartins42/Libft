/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <anmendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:56:39 by anmendes          #+#    #+#             */
/*   Updated: 2024/10/30 12:09:00 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(int n)
{
	int	count;

	if (n == 0)
		return (1);
	count = 0;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

void	*ft_fill(char *str, int n, int size)
{
	str[size] = '\0';
	while (size)
	{
		str[size - 1] = n % 10 + '0';
		n /= 10;
		size--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;

	size = count(n);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		if (n == -2147483648)
		{
			n = 147483648;
			ft_fill(str, n, size);
			str[0] = '-';
			str[1] = '2';
			return (str);
		}
		n *= -1;
		ft_fill(str, n, size);
		str[0] = '-';
		return (str);
	}
	ft_fill(str, n, size);
	return (str);
}
