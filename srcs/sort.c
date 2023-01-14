/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:19:32 by anmande           #+#    #+#             */
/*   Updated: 2023/01/14 15:49:27 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_b(t_list **list_a, t_list **list_b, int trunk, int facteur)
{
	int	i;

	i = 1;
	while ((i < trunk && (*list_a)->next->next) && ft_len((*list_a)) != 3)
	{
		if ((*list_a)->index <= trunk * facteur)
		{	
			ft_pb(list_a, list_b);
			i++;
		}
		else if (ft_choice((*list_a), trunk) < 1)
			ft_ra(list_a);
		else
			while ((*list_a)->index >= trunk * facteur)
				ft_rra(list_a);
	}
}

void	ft_push_a(t_list **list_b, t_list **list_a, int max)
{
	while (max > 1)
	{
		if (ft_len((*list_a)) >= 2 && (*list_a)->index > (*list_a)->next->index && (*list_a)->next)
				ft_sa(list_a);
		if ((*list_b)->index == max)
		{
			ft_pa(list_b, list_a);
			max--;
		}
		else if (ft_find((*list_b), max) >= ft_find_bot_bis((*list_b), max) && max > 2)
			ft_rrb(list_b);
		else
		{
			if ((*list_b)->index == max && max >= 2)
			{
				ft_pa(list_b, list_a);
				max--;
			}
			ft_rb(list_b);
		}
	}
	if (ft_len((*list_b)) <= 1)
		ft_pa(list_b, list_a);
}
