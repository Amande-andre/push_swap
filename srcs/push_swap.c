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
	
	ft_push_b(&list_a, &list_b, ac / 2);
	//ft_ra(&list_a);
	while (list_a)
	{
		printf("a=%d'\n", list_a->content);
		list_a = list_a->next;
	}
	while (list_b)
	{
		printf("b=%d\n", list_b->content);
		list_b = list_b->next;
	}
	return (0);
}

