/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:43:09 by alvicina          #+#    #+#             */
/*   Updated: 2023/12/06 17:11:16 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

# define ERR_INPUT "Error"

typedef struct ps_list
{
	int				value;
	int				index;
	struct ps_list	*next;
}					t_push;

void		ft_mesg(char *err);
void		ft_check_args(int argc, char **argv);
int			ft_check_num(char *numbs);
int			ft_check_duplicate(long temp, char **numbs, size_t i);
t_push		*ft_lstnew_push_swap(int value);
void		ft_lstadd_back_push_swap(t_push **stack_a, t_push *list);
t_push		*ft_lstlast_push_swap(t_push *lst);
void		ft_put_index(t_push **stack_a);
t_push		*ft_get_next_min_arg(t_push **stack_a);
void		ft_free(char **argv);
void		ft_free_stack(t_push **stack);
int			ft_list_sorted(t_push **stack_a);
int			ft_lstsize_push_swap(t_push *list);
void		ft_sort_simple(t_push **stack_a, t_push **stack_b, int list_size);
int			ft_sa(t_push **stack_a);
int			ft_sb(t_push **stack_b);
int			ft_swap(t_push **stack);
int			ft_rb(t_push **stack_b);
int			ft_ra(t_push **stack_a);
int			ft_rotate(t_push **stack);
int			ft_rra(t_push **stack_a);
int			ft_rrb(t_push **stack_b);
int			ft_rrr(t_push **stack_a, t_push **stack_b);
int			ft_reverse_rotate(t_push **stack);
int			ft_pb(t_push **stack_a, t_push **stack_b);
int			ft_pa(t_push **stack_a, t_push **stack_b);
int			ft_push(t_push **stack_to, t_push **stack_from);
int			ft_get_distance(t_push **stack_a, int *min);
void		ft_radix_sort(t_push **stack_a, t_push **stack_b);

#endif
