/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <anmendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:53:07 by anmendes          #+#    #+#             */
/*   Updated: 2024/10/30 12:05:10 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*cpy;

	cpy = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (cpy == NULL)
		return (NULL);
	ft_strlcpy(cpy, s, ft_strlen(s) + 1);
	return (cpy);
}
