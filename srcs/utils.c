/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:28:49 by anmande           #+#    #+#             */
/*   Updated: 2022/12/13 18:32:58 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_len(t_list *list)
{
	int		i;

	i = 0;
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
	int	i;

	i = 0;
	while (list->next)
	{
		i += list->content;
		list = list->next;
	}
	return (i / ft_len(list));
}