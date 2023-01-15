/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gatherarg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 23:29:18 by anmande           #+#    #+#             */
/*   Updated: 2023/01/14 17:16:30 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*new;

	new = malloc(sizeof(t_list) * 1);
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->content = content;
	new->index = 1;
	return (new);
}

void	ft_addfirst(t_list **new_list, int nb)
{
	t_list	*node;

	node = ft_lstnew(nb);
	if (new_list == NULL || node == NULL)
		return ;
	node->content = nb;
	node->next = *new_list;
	*new_list = node;
}

void	ft_index(t_list **list)
{
	t_list	*tmp;
	t_list	*start;

	start = (*list);
	tmp = (*list);
	while ((*list))
	{
		while (tmp)
		{
			if ((*list)->content > tmp->content)
			{
				(*list)->index++;
			}
			tmp = tmp->next;
		}
		*list = (*list)->next;
		tmp = start;
	}
	*list = start;
}
