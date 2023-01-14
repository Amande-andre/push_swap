/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:45:10 by anmande           #+#    #+#             */
/*   Updated: 2023/01/14 16:15:07 by anmande          ###   ########.fr       */
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
	return(1);
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
			if ((list->content == tmp->content && j != i)
			|| (tmp->content < INT_MIN || tmp->content > INT_MAX))
				return (0);
			tmp = tmp->next;
			i++;
		}
		list = list->next;
		tmp = start;
		j++;
	}
	return (1);
}

int	ft_check_arg(char **av, t_list *list)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (!(ft_isdigit(av[i][j])))
				return 0;
			j++;
		}
		i++;
	}
	if (!(ft_check_doubl(list)))
		return 0;
	return (1);
}
