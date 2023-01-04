/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:19:32 by anmande           #+#    #+#             */
/*   Updated: 2023/01/04 18:14:40 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*cette fonction peut etre ameliore en rb et/ou rrr*/

void	ft_push_b(t_list **list_a, t_list **list_b, int trunk, int stop)
{
	while (ft_len((*list_a)->next) >= stop + 1)
	{
		if ((*list_a)->index < trunk)
		{	
			ft_pb(list_a, list_b);
		}
		else //fonction pour savoir si ra ou rra
		{
			ft_ra(list_a);
		}
	}
}

void	ft_push_bbis(t_list **list_a, t_list **list_b, int trunk, int stop)
{
	while (ft_len((*list_a)->next) >= stop)
	{
		if ((*list_a)->index < trunk)
		{	
			ft_pb(list_a, list_b);
		}
		else if((*list_a)->content >= trunk * 2)   //modifier peut etre le 2, valeur a modifier pour otpimiser
		{
			ft_pb((list_a), (list_b));
			ft_rb(list_b);
		}
		else //fonction pour savoir si ra ou rra
		{
			ft_ra(list_a);
		}
	}
}

// void	ft_push_a2(t_list **list_b, t_list **list_a, int trunk, int stop)
// {
// 	while (ft_len((*list_b)) >= stop)
// 	{
// 		if ((*list_b)->index >= trunk)
// 		{	
// 			ft_pa(list_b, list_a);
// 		}
// 		else
// 		{
// 			ft_rb(list_b);
// 		}
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
			ft_rb(list_b);
		printf("%d\n", max);
	}
}

// void	ft_push_a(t_list **list_a, t_list **list_b, int middl)
// {
// 	t_list	*tmp;

// 	while (list_a)
// 	{
// 		if ((*list_a)->content <= middl)
// 		{	
// 			ft_pa(list_b, list_a);
// 			tmp = (*list_b);
// 		}
			
// 	}
// 	*list_b = tmp;
// }