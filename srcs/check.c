/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:45:10 by anmande           #+#    #+#             */
/*   Updated: 2023/01/14 17:15:07 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_sort_a(t_list *list)
{
	while (list->next)
	{
		if (list->content > list->next->content)
			return (1);
		list = list->next;
	}
	return (0);
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
		while (tmp)
		{
			if ((list->content == tmp->content && j != i))
			{
				write(1, "Error\n", 6);
				return (0);
			}	
			tmp = tmp->next;
			i++;
		}
		list = list->next;
		tmp = start;
		j++;
	}
	return (1);
}

int	ft_check_arg(char **av, int ac)
{
	int	i;
	int	j;

	i = 1;
	(void)ac;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (ft_isdigit(av[i][j]) == 0 && ft_isdigit(av[i][j + 1]) == 0)
			{
				write(1, "Error\n", 6);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
