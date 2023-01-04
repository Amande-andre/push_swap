/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 23:30:11 by anmande           #+#    #+#             */
/*   Updated: 2023/01/04 15:12:39 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_list
{
	int				content;
	int				index;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(int content);
void	ft_addfirst(t_list **new_list, int nb);
void    ft_sa(t_list **list);
void    ft_sb(t_list **list);
void	ft_pa(t_list **list_b, t_list **list_a);
void	ft_pb(t_list **list_a, t_list **list_b);
void	ft_ra(t_list **list);
void	ft_rb(t_list **list);
void	ft_rra(t_list **list);
void	ft_rrb(t_list **list);
void	ft_ss(t_list **list_a, t_list **list_b);
void	ft_rr(t_list **list_a, t_list **list_b);
void	ft_rrr(t_list **list_a, t_list **list_b);
void	ft_push_b(t_list **list_a, t_list **list_b, int trunk, int stop);
void	ft_push_bbis(t_list **list_a, t_list **list_b, int trunck, int stop);
void	ft_push_a(t_list **list_b, t_list **list_a, int trunk, int stop);
int		ft_len(t_list *list);
void	ft_index(t_list **list);
int		ft_median(t_list *list);
int		ft_is_sort_a(t_list *list);
int		ft_is_sort_b(t_list *list);
int		ft_trunk(t_list *list);
int		ft_find(t_list	*list, int find);

#endif