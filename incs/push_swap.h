/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 23:30:11 by anmande           #+#    #+#             */
/*   Updated: 2023/01/15 16:16:05 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <libft.h>
# include <limits.h>
# define PUSH_SWAP_H

typedef struct s_list
{
	int				content;
	int				index;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(int content);
void	ft_addfirst(t_list **new_list, int nb);
void	ft_sa(t_list **list);
void	ft_sb(t_list **list);
void	ft_pa(t_list **list_b, t_list **list_a);
void	ft_pb(t_list **list_a, t_list **list_b);
void	ft_ra(t_list **list);
void	ft_rb(t_list **list);
void	ft_rra(t_list **list);
void	ft_rrb(t_list **list);
void	ft_ss(t_list **list_a, t_list **list_b);
void	ft_rr(t_list **list_a, t_list **list_b);
void	ft_rrr(t_list **list_a, t_list **list_b);
void	ft_push_b(t_list **list_a, t_list **list_b, int trunk, int facteur);
void	ft_push_a(t_list **list_b, t_list **list_a, int max);
int		ft_len(t_list *list);
void	ft_index(t_list **list);
int		ft_is_sort_a(t_list *list);
int		ft_trunk(t_list *list);
int		ft_find(t_list	*list, int find);
int		ft_find_trunk(t_list	*list, int trunk);
int		ft_find_bot(t_list *list, int trunk);
int		ft_choice(t_list *list, int trunk);
int		ft_find_bot_bis(t_list *list, int trunk);
void	ft_sort_three(t_list **list_a);
void	ft_sort_five(t_list **list_a, t_list **list_b);
int		ft_check_doubl(t_list *list);
int		ft_check_arg(char **av, int ac);
void	ft_process(t_list **list_a, t_list **list_b, int ac);
void	ft_sort_hundred(t_list **list_a, t_list **list_b, int ac, int i);
void	ft_free_list(t_list **list);
int		ft_endof_prog(t_list **list, int ac);
int		ft_chaine(int ac, char **av, t_list **list);

#endif