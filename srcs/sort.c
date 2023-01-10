/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:19:32 by anmande           #+#    #+#             */
/*   Updated: 2023/01/10 16:45:12 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*cette fonction peut etre ameliore en rb et/ou rrr*/

void	ft_push_b(t_list **list_a, t_list **list_b, int trunk)
{
	while (ft_len((*list_a)->next) >= 3)
	{
		if ((*list_a)->index <= trunk && (*list_a)->index <= trunk - 3)
		{	
			ft_pb(list_a, list_b);
		}
		else if (ft_find_trunk((*list_a), trunk) - ft_find_bot((*list_a), trunk) <= 0)
		{
			ft_ra(list_a);
		}
		else
		{
			while ((*list_a)->index >= trunk)
			{
				ft_rra(list_a);
			}
		}
		//printf("choice===%dtrunk===%d\n", ft_find_trunk((*list_a), trunk) - ft_find_bot((*list_a), trunk), trunk);
	}
}

void	ft_push_bbis(t_list **list_a, t_list **list_b, int trunk, int facteur)
{
	int	i;

	i = 1;
	while (i < trunk && (*list_a)->next->next)
	{
		// if (i == 250)
		// 	break;
		if ((*list_a)->index <= trunk * facteur)
		{	
			//printf("index===%dtrunk===%d\n", (*list_a)->index, trunk * facteur);
			ft_pb(list_a, list_b);
			i++;
		}
		else if (ft_choice((*list_a), trunk) < 1)
		{
			ft_ra(list_a);
			// while (ft_find_trunk((*list_a), trunk) - ft_find_bot((*list_a), trunk) > 0)
			// {
			// }
			//ft_pb(list_a, list_b);
			//i++;
			// if ((*list_a)->index <= trunk)
			// 	ft_pb(list_a, list_b);
			//printf("index===%dtrunk===%d\nchoice====%d\n", ft_find_trunk((*list_a), trunk), ft_find_bot((*list_a), trunk), ft_choice((*list_a), trunk));
		}
		else
		{
			while ((*list_a)->index >= trunk * facteur)
			{
				// if ((*list_a)->index <= trunk)
				// {	
				// 	ft_pb(list_a, list_b);
				// 	i++;
				// }
				ft_rra(list_a);
			}
		}
		//if ()
		//trunk = ft_trunk((*list_a));
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
		{
			//printf("index===%d\nmax===%d\na===%d\n", (*list_b)->index, max, (*list_a)->index);
			ft_rrb(list_b);
		}
		else// (ft_find((*list_b), max) <= max / 2 && max >= 2)
		{
			if ((*list_b)->index == max && max >= 2)
			{
				ft_pa(list_b, list_a);
				max--;
			}			
			ft_rb(list_b);
		}
	}
}
