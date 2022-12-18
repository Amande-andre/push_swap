/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:45:10 by anmande           #+#    #+#             */
/*   Updated: 2022/12/17 23:15:42 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_sort_a(t_list *list)
{
	int	i;

	i = 0;
	while (list->next)
	{
		i++;
		if (list->index > list->next->index)
			return (i);
		list = list->next;
	}
	return(0);
}

int	ft_is_sort_b(t_list *list)
{
	int	i;

	i = 0;
	while (list->next)
	{
		i++;
		if (list->index < list->next->index)
			return (0);
	}
	return(i);
}
