/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 22:10:09 by anmande           #+#    #+#             */
/*   Updated: 2023/01/09 17:46:28 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_sort_three(t_list **stack_a)
{
    if (((*stack_a)->index > (*stack_a)->next->index)
        && (*stack_a)->index > (*stack_a)->next->next->index)
    {
        ft_ra(stack_a);
    }
    else if (((*stack_a)->next->index > (*stack_a)->index)
        && (*stack_a)->next->index > (*stack_a)->next->next->index)
    {
        ft_rra(stack_a);
    }
    if ((*stack_a)->index > (*stack_a)->next->index)
    {
        ft_sa(stack_a);
    }
}