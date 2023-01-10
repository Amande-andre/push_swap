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
	int	trunk;

	list_a = NULL;
	list_b = NULL;
	i = ac;
	while (i-- > 1)
	{
		ft_addfirst(&list_a, ft_atoi(av[i]));
	}
	ft_index(&list_a);
	if (ac - 1 <= 100)
		trunk = (ac - 1) / 5;
	else if (ac - 1 == 500)
	{
		trunk = (ac - 1) / 12;//ft_trunk(list_a);
	}
	else
		trunk = ft_trunk(list_a);
	if (ac <= 10)
	{
		ft_sort_ten(&list_a, &list_b);
		return 0;
	}
	while (ft_len(list_a) > 3)
	{
		i++;
		ft_push_bbis(&list_a, &list_b, trunk, i);
	}
	i++;
	ft_pb(&list_a, &list_b);
	ft_pb(&list_a, &list_b);
	ft_push_a(&list_b, &list_a, ft_len(list_b));

	//ft_push_a(&list_b, &list_a, ft_median(list_b));
	

	////////////////////////////////////////////////////////////printflist////////////////////////////////////////////////

	// while (list_a)
	// {
	// 	printf("a=%d'index=%d\n", list_a->content, list_a->index);
	// 	list_a = list_a->next;
	// }
	// while (list_b)
	// {
	// 	printf("b=%d index==%d\n", list_b->content, list_b->index);
	// 	list_b = list_b->next;
	// }
	return (0);
}
