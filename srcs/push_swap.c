/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 23:03:20 by anmande           #+#    #+#             */
/*   Updated: 2022/11/25 23:03:21 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*list_a;
	t_list	*list_b;

	list_a = NULL;
	list_b = NULL;
	if (!(ft_check_arg(av, ac)))
		return (0);
	if (!ft_chaine(ac, av, &list_a))
		return (0);
	if (!(ft_endof_prog(&list_a, ac)))
		return (0);
	if (ac - 1 == 2)
	{
		ft_sa(&list_a);
		ft_free_list(&list_a);
		return (0);
	}
	ft_process(&list_a, &list_b, ac);
	ft_free_list(&list_a);
	return (0);
}

void	ft_process(t_list **list_a, t_list **list_b, int ac)
{
	int	i;

	i = 0;
	ft_index(list_a);
	if (ac - 1 == 3)
	{
		ft_sort_three(list_a);
		return ;
	}
	if (ac - 1 == 5)
	{
		ft_sort_five(list_a, list_b);
		return ;
	}
	ft_sort_hundred(list_a, list_b, ac, i);
}

void	ft_sort_hundred(t_list **list_a, t_list **list_b, int ac, int i)
{
	int	trunk;

	if (ac - 1 == 100)
		trunk = (ac - 1) / 5;
	else if (ac - 1 == 500)
		trunk = (ac - 1) / 12;
	else if (ac - 1 < 100)
	{
		trunk = ft_len((*list_a)) / 2;
	}
	else
		trunk = ft_trunk((*list_a));
	while (ft_len(*list_a) > 3)
	{
		i++;
		ft_push_b(list_a, list_b, trunk, i);
	}
	i++;
	ft_pb(list_a, list_b);
	ft_pb(list_a, list_b);
	ft_pb(list_a, list_b);
	ft_push_a(list_b, list_a, ft_len((*list_b)));
}

int	ft_endof_prog(t_list **list, int ac)
{
	(void)ac;
	if (ft_check_doubl((*list)) == 0)
	{
		ft_free_list(list);
		return (0);
	}	
	if (ft_is_sort_a((*list)) == 0)
	{
		ft_free_list(list);
		return (0);
	}
	return (1);
}

int	ft_chaine(int ac, char **av, t_list **list)
{
	int	i;

	i = ac;
	while (i-- > 1)
	{
		if (ft_atoi(av[i]) < INT_MIN || ft_atoi(av[i]) > INT_MAX)
		{
			write(1, "Error\n", 6);
			ft_free_list(list);
			return (0);
		}
		ft_addfirst(list, ft_atoi(av[i]));
	}
	if (ac == 1)
	{
		ft_free_list(list);
		return (0);
	}
	return (1);
}