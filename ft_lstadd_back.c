/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <anmendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:39:36 by anmendes          #+#    #+#             */
/*   Updated: 2024/11/04 16:22:57 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if(new == NULL || lst == NULL)
		return ;
 	if (*lst == NULL)
	{
		*lst = new;
		new->next = NULL;
		return ;
	}
 	tmp = *lst;
	while (tmp->next != NULL) 
		tmp = tmp->next;
	tmp->next = new;
}
/* int main (void)
{
		t_list * l =  NULL; t_list * l2 =  NULL;
	
		ft_lstadd_back(&l, ft_lstnew((void*)1));
		ft_lstadd_back(&l, ft_lstnew((void*)2));
		ft_lstadd_back(&l2, ft_lstnew((void*)3));
		ft_lstadd_back(&l2, ft_lstnew((void*)4));
		ft_lstadd_back(&l, l2);

} */