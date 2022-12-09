/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:58:20 by anmande           #+#    #+#             */
/*   Updated: 2022/12/09 22:25:10 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_sb(t_list **list)
{
    t_list  *tmp;

	tmp = *list;
	*list = (*list)->next;
	tmp->next = (*list)->next;
	(*list)->next = tmp;
}

void	ft_pb(t_list **list_a, t_list **list_b)
{
	t_list	*tmp;
	
	if (list_b == NULL)
	{	
		tmp = (*list_a)->next;
		(*list_a)->next = (*list_b);
		(*list_b) = *list_a;
		*list_a = tmp;
	}
}

void	ft_rb(t_list **list)
{
	t_list	*tmp;
	
	tmp = (*list);
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = *list;
	*list = (*list)->next;
	tmp->next->next = NULL;
}

void	ft_rrb(t_list **list)
{
	t_list	*tmp;

	tmp = *list;
	while (tmp->next->next)
	{
		tmp = tmp->next;
	}
	tmp->next->next = *list;
	*list = tmp->next;
	tmp->next = NULL;
}