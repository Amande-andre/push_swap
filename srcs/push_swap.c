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
	int i;
	t_list	*list_a;
	t_list	*list_b;

	i = 0;
	list_a = NULL;
	list_b = NULL;
	i = ac;
	while (i-- > 1)
	{
		ft_addfirst(&list_a, atoi(av[i]));
	}
	ft_index(&list_a);
	// while (ft_is_sort_a(list_a) != 0)
	// {
	// }
		while (list_a->next)
		{
			ft_push_b(&list_a, &list_b, ft_median(list_a));	
		}
		//ft_pa(&list_b, &list_a);
		//ft_pa(&list_b, &list_a);
		// while (list_b != NULL)
		// {
		// 	ft_push_a(&list_b, &list_a, ft_median(list_b));
		// }	
	while (list_b->next)
		{
			ft_push_a(&list_b, &list_a, ft_median(list_b));
		}
	// 	while (ft_len(list_b))
	// 	{
	// 		ft_push_a(&list_b, &list_a, ft_median(list_b));
	// 	}	
	//ft_push_b(&list_a, &list_b, ft_median(list_a));
	while (list_a)
	{
		printf("a=%d'index=%d\n", list_a->content, list_a->index);
		list_a = list_a->next;
	}
	while (list_b)
	{
		printf("b=%d index==%d\n", list_b->content, list_b->index);
		list_b = list_b->next;
	}
	return (0);
}
