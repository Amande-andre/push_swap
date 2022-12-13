/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:19:32 by anmande           #+#    #+#             */
/*   Updated: 2022/12/13 17:16:19 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*cette fonction peut etre ameliore en rb et/ou rrr*/

void	ft_push_b(t_list **list_a, t_list **list_b, int middl)
{
	int	i;
	
	i = 0;
	while ((*list_a)->next && i <= middl + 1)
	{
		if ((*list_a)->index <= middl)
		{	
			ft_pb(list_a, list_b);
		}
		else
		{
			ft_ra(list_a);
		}
		i++;
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