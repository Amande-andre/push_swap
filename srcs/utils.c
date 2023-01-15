/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:28:49 by anmande           #+#    #+#             */
/*   Updated: 2023/01/15 15:53:16 by anmande          ###   ########.fr       */
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
	return (i);
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

int	ft_choice(t_list *list, int trunk)
{
	return (ft_find_trunk(list, trunk) - ft_find_bot(list, trunk));
}

void	ft_free_list(t_list **list)
{
	t_list	*del;
	t_list	*tmp;

	tmp = *list;
	while (tmp)
	{
		del = tmp;
		tmp = tmp->next;
		free(del);
	}
	*list = NULL;
}
