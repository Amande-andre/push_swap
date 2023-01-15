/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 17:23:24 by anmande           #+#    #+#             */
/*   Updated: 2023/01/14 17:24:32 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_bot_bis(t_list *list, int trunk)
{
	int	i;

	i = 0;
	while (list->next)
	{
		i++;
		if (list->index == trunk)
		{
			i = 0;
		}
		list = list->next;
	}
	return (i);
}

int	ft_find(t_list	*list, int find)
{
	int		i;

	i = 0;
	while (list->next)
	{
		if (list->index == find)
			return (i);
		list = list->next;
		i++;
	}
	return (i);
}

int	ft_find_trunk(t_list *list, int trunk)
{
	int		i;

	i = 0;
	while (list->next)
	{
		if (list->index <= trunk)
			return (i);
		i++;
		list = list->next;
	}
	return (i);
}

int	ft_find_bot(t_list *list, int trunk)
{
	int	i;

	i = 0;
	while (list)
	{
		i++;
		if (list->index <= trunk)
		{
			i = 0;
		}
		list = list->next;
	}
	return (i);
}
