/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:19:32 by anmande           #+#    #+#             */
/*   Updated: 2023/01/08 19:50:11 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*cette fonction peut etre ameliore en rb et/ou rrr*/

void	ft_push_b(t_list **list_a, t_list **list_b, int trunk, int stop)					//////ok en cour d'opti
{
	while (ft_len((*list_a)->next) >= stop)
	{
		if ((*list_a)->index <= trunk)
		{	
			ft_pb(list_a, list_b);			
		}
		else if (ft_find_trunk((*list_a), trunk) - ft_find_bot((*list_a), trunk) <= 0)
		{
			while ((*list_a)->index >= trunk)
			{
				ft_ra(list_a);
			}
		}
		else
		{
			while ((*list_a)->index >= trunk)
			{
				ft_rra(list_a);
			}
		}
	}
}

void	ft_push_bbis(t_list **list_a, t_list **list_b, int trunk, int facteur)
{
	int	i;

	i = 0;
	while (i < trunk && (*list_a)->next)
	{
		// if (i == 250)
		// 	break;
		if ((*list_a)->index <= trunk * facteur)
		{	
			//printf("index===%dtrunk===%d\n", (*list_a)->index, trunk * facteur);
			ft_pb(list_a, list_b);
			i++;
		}
		else if (ft_choice((*list_a), trunk) <= 1)
		{
			ft_ra(list_a);
			// while (ft_find_trunk((*list_a), trunk) - ft_find_bot((*list_a), trunk) > 0)
			// {
			// }
			//ft_pb(list_a, list_b);
			//i++;
			// if ((*list_a)->index <= trunk)
			// 	ft_pb(list_a, list_b);
		}
		else
		{
			while ((*list_a)->index >= trunk * facteur)
			{
				if ((*list_a)->index <= trunk)
				{	
					ft_pb(list_a, list_b);
					i++;
				}
				ft_rra(list_a);
				//printf("index===%dtrunk===%d\ni====%d\n", (*list_a)->index, trunk * facteur, i);
			}
			// while (ft_find_trunk((*list_a), trunk) - ft_find_bot((*list_a), trunk) < 0)
			// {
			// }
			//ft_pb(list_a, list_b);
		}

		//trunk = ft_trunk((*list_a));
	}
}

// void	ft_push_bbis(t_list **list_a, t_list **list_b, int trunk, int stop)
// {
// 	while (ft_len((*list_a)->next) >= stop)
// 	{
// 		if ((*list_a)->index < trunk)
// 		{	
// 			ft_pb(list_a, list_b);
// 		}
// 		else if((*list_a)->index >= trunk * 2)   //modifier peut etre le 2, valeur a modifier pour otpimiser
// 		{
// 			ft_pb((list_a), (list_b));
// 			ft_rb(list_b);
// 		}
// 		else //fonction pour savoir si ra ou rra
// 		{
// 			ft_ra(list_a);
// 		}
// 	}
// }

// void	ft_push_a(t_list **list_b, t_list **list_a, int max)
// {
// 	while (max >= 1)
// 	{
// 		if (ft_len((*list_a)) >= 2 && (*list_a)->index > (*list_a)->next->index && (*list_a)->next)
// 				ft_sa(list_a);
// 		if ((*list_b)->index == max && max >= 2)
// 		{
// 			ft_pa(list_b, list_a);
// 			max--;
// 		}
// 		else if (ft_find((*list_b), max) >= max / 2 && max >= 2)
// 		{
// 			ft_rrb(list_b);
// 		}
// 		else// (ft_find((*list_b), max) <= max / 2 && max >= 2)
// 			ft_rb(list_b);
// 	}
// }
void	ft_push_a(t_list **list_b, t_list **list_a, int max)
{
	while (max >= 2)
	{
		if (ft_len((*list_a)) >= 2 && (*list_a)->index > (*list_a)->next->index && (*list_a)->next)
				ft_sa(list_a);
		if ((*list_b)->index == max && max >= 2)
		{
			ft_pa(list_b, list_a);
			max--;
		}
		else if (ft_find((*list_b), max) >= max / 2 && max >= 2)
		{
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
