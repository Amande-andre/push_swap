/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:19:32 by anmande           #+#    #+#             */
/*   Updated: 2022/12/09 22:11:31 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_b(t_list **list_a, t_list **list_b, int middl)
{
	t_list	*tmp_a;

	while (list_a && (*list_a)->content <= middl)
	{
		ft_pb(list_a, list_b);
		//*list_a = tmp_a->next;
		*list_a = (*list_a)->next;
		tmp_a = (*list_a);
	}
	*list_a = tmp_a;
}
