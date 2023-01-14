/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:45:10 by anmande           #+#    #+#             */
/*   Updated: 2023/01/14 13:06:04 by anmande          ###   ########.fr       */
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
			return(i);
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
			i = 0;
	}
	return(i);
}

int	ft_check_doubl(t_list *list)
{
	t_list	*tmp;
	t_list	*start;
	int		i;
	int		j;

	j = 0;
	start = list;
	tmp = list;
	while (list)
	{
		i = 0;
		while(tmp)
		{
			if (list->content == tmp->content && j != i)
				return (1);
			tmp = tmp->next;
			i++;
		}
		list = list->next;
		tmp = start;
		j++;
	}
	return (0);
}
int	ft_check_arg(char **av)
{
	
}
