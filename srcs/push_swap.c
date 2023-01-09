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
		ft_addfirst(&list_a, atoi(av[i]));
	}
	ft_index(&list_a);
	trunk = ft_trunk(list_a);
	while (ft_len(list_a) > trunk)
	{
		i++;
		ft_push_bbis(&list_a, &list_b, trunk, i);
	}
	i++;
	//printf("i======%d\n", i * trunk);
	ft_push_b(&list_a, &list_b, trunk * i);//ft_push_bbis(&list_a, &list_b, ac - 1);
	ft_sort_three(&list_a);
	// 	ft_pb(&list_a, &list_b);
	ft_push_a(&list_b, &list_a, ft_len(list_b));


		//printf("%d\n", ft_trunk(list_a));
		// while (list_a)
		// {
		// 	ft_push_b(&list_a, &list_b, ft_median(list_a));	
		// }	
		// while (list_b)
		// {
		//ft_push_abis(&list_b, &list_a, ac + 1);
		// }
	// 		ft_push_a(&list_b, &list_a, ft_median(list_b));
	// 	}	
	//ft_push_b(&list_a, &list_b, ft_median(list_a));

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
