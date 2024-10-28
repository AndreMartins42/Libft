/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <anmendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:58:36 by anmendes          #+#    #+#             */
/*   Updated: 2024/10/25 18:43:43 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	lens1;
	size_t	lens2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	new = (char *)malloc(sizeof(char) * (lens1 + lens2) + 1);
	if (new == NULL)
		return (NULL);
	ft_strlcpy(new, s1, lens1 + 1);
	ft_strlcat(new, s2, lens1 + lens2 + 1);
	return (new);
}
