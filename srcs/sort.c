/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:19:32 by anmande           #+#    #+#             */
/*   Updated: 2022/12/14 15:37:44 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*cette fonction peut etre ameliore en rb et/ou rrr*/

void	ft_push_b(t_list **list_a, t_list **list_b, int middl)
{
	int	i;
	
	i = ft_len((*list_a));
	while (ft_len((*list_a)) > (i / 2))
	{
		if ((*list_a)->index <= middl)
		{	
			ft_pb(list_a, list_b);
			if ((*list_b)->next && (*list_b)->index < (*list_b)->next->index)
			{
				ft_sb(list_b);
			}
		}
		else
		{
			ft_ra(list_a);
		}
	}
}

void	ft_push_a(t_list **list_b, t_list **list_a, int middl)
{
	int	i;

	i = ft_len((*list_b));
	while (ft_len((*list_b)) > (i / 2))
	{
		if ((*list_b)->index >= middl)
		{	
			ft_pb(list_b, list_a);
		}
		else if (ft_len((*list_b)) >= 2)
		{
			ft_rb(list_b);
			i++;
		}
	}
}

void	ft_push_a2(t_list **list_b, t_list **list_a, int middl)
{
	int	i;
	
	i = 0;
	while ((*list_b)->next && i <= middl)
	{
		if ((*list_b)->index >= middl)
		{	
			ft_pb(list_b, list_a);
		}
		else if (ft_len((*list_b)) >= 2)
		{
			ft_rrb(list_b);
			i++;
		}
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