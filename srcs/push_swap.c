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
	int		middl;

	i = 0;
	list_a = NULL;
	list_b = NULL;
	i = ac;
	while (i-- > 1)
	{
		ft_addfirst(&list_a, atoi(av[i]));
	}
	i = ac;
	middl = ft_middl(list_a);
	//ft_pb(&list_a, &list_b);
	ft_push_b(&list_a, &list_b, middl);
	while (list_a)
	{
		printf("a=%d\n", list_a->content);
		list_a = list_a->next;
	}
	while (list_b)
	{
		printf("b=%d\n", list_b->content);
		list_b = list_b->next;
	}
	//ft_addfirst(&list_b, 8);
	return middl;
}

