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

	t_list	*list = NULL;
	i = ac;
	ft_lstnew(i);
	while (i-- > 1)
	{
		ft_addfirst(&list, atoi(av[i]));
	}
	while (list)
	{
		printf("%d\n", list->content);
		list = list->next;
	}
	return 0;
}
