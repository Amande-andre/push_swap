/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 22:10:09 by anmande           #+#    #+#             */
/*   Updated: 2023/01/10 18:03:55 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_sort_three(t_list **list_a)
{
    if (((*list_a)->index > (*list_a)->next->index)
        && (*list_a)->index > (*list_a)->next->next->index)
    {
        ft_ra(list_a);
    }
    else if (((*list_a)->next->index > (*list_a)->index)
        && (*list_a)->next->index > (*list_a)->next->next->index)
    {
        ft_rra(list_a);
    }
    if ((*list_a)->index > (*list_a)->next->index)
    {
        ft_sa(list_a);
    }
}

void	ft_sort_ten(t_list **list_a, t_list **list_b)
{
	int	i;

	i = 0;
	while (i != 2)
	{
	 	if ((*list_a)->index <= 2)
		{
			ft_pb(list_a, list_b);
			i++;
		}
		else if (ft_find_trunk((*list_a), 2) <= 1)
		{
			ft_ra(list_a);
		}
		else
			ft_rra(list_a);
	}
	ft_sort_three(list_a);
	ft_pa(list_b, list_a);
	ft_pa(list_b, list_a);
	if ((*list_a)->index > (*list_a)->next->index)
		ft_sa(list_a);
	//ft_sort_three(list_a);
	// ft_pb(list_a, list_b);
	// ft_pb(list_a, list_b);
}