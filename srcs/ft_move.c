/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:40:32 by anmande           #+#    #+#             */
/*   Updated: 2022/12/03 19:34:33 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_sa(t_start *start)
{
    t_list  *tmp;

    tmp = start->start_a;
	//write(1, "8\n", 2);
	start->start_a = start->start_a->next->next;
	tmp->next = start->start_a->next;
	start->start_a->next = tmp;
}
