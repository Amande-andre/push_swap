/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:40:32 by anmande           #+#    #+#             */
/*   Updated: 2022/12/06 19:59:49 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_sa(t_list **list)
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
	
	tmp = (*list_a)->next;
	(*list_a)->next = (*list_b);
	(*list_b) = *list_a;
	*list_a = tmp;
}

void	ft_pa(t_list **list_b, t_list **list_a)
{
	t_list	*tmp;
	
	tmp = (*list_a)->next;
	(*list_a)->next = (*list_b);
	(*list_b) = *list_a;
	*list_a = tmp;
}

void	ft_ra(t_list **list)
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