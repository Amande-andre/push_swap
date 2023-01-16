/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:40:32 by anmande           #+#    #+#             */
/*   Updated: 2023/01/14 17:25:38 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_list **list)
{
	t_list	*tmp;

	tmp = *list;
	*list = (*list)->next;
	tmp->next = (*list)->next;
	(*list)->next = tmp;
	write(1, "sa\n", 3);
}

void	ft_pa(t_list **list_b, t_list **list_a)
{
	t_list	*tmp;

	tmp = (*list_b)->next;
	(*list_b)->next = (*list_a);
	(*list_a) = *list_b;
	*list_b = tmp;
	write(1, "pa\n", 3);
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
	write(1, "ra\n", 3);
}

void	ft_rra(t_list **list)
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
	write(1, "rra\n", 4);
}
