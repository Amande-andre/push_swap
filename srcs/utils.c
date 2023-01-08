/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:28:49 by anmande           #+#    #+#             */
/*   Updated: 2023/01/08 14:36:16 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_len(t_list *list)
{
	int		i;

	i = 0;
	// if (!list->next)
	// {
	// 	return (0);
	// }
	
	while (list)
	{
		list = list->next;
		i++;
	}
	return	i;
}

void	ft_index(t_list **list)
{
	t_list	*tmp;
	t_list	*start;

	start = (*list);
	tmp = (*list);
	while ((*list))
	{
		while(tmp)
		{
			if ((*list)->content > tmp->content)
			{
				(*list)->index++;
			}
			tmp = tmp->next;
		}
		*list = (*list)->next;
		tmp = start;
	}
	*list = start;
}

int	ft_median(t_list *list)
{
	int		i;
	t_list	*tmp;

	i = list->index;
	tmp = list;
	while (list->next)
	{
		list = list->next;
		i += list->index;
	}
	list = tmp;
	return (i / ft_len(list));
}
int	ft_trunk(t_list *list)
{
	int		i;
	t_list	*tmp;

	i = list->index;
	tmp = list;
	while (list->next)
	{
		list = list->next;
		i += list->index;
	}
	list = tmp;
	return ((i / ft_len(list)) / 2);
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
		i++;
		if (list->index <= trunk)
			return (i);
		list = list->next;
	}
	return (i);
}

int	ft_find_bot(t_list *list, int trunk)
{
	int	i;

	i = 0;
	while (list->next)
	{
		if (list->index <= trunk)
		{
			i = 0;
		}
		i++;
		list = list->next;
	}
	return (i);
}

int	ft_choice(t_list *list, int trunk)
{
	return (ft_find_trunk(list, trunk) - ft_find_bot(list, trunk));
}