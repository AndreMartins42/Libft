/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <anmendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:46:57 by anmendes          #+#    #+#             */
/*   Updated: 2024/10/28 17:45:21 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	s_len = ft_strlen(&s[start]);
	if (len > s_len)
		len = s_len;
	ptr = (char *)malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, &s[start], len + 1);
	return (ptr);
}
