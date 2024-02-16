/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_simple.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:29:07 by alvicina          #+#    #+#             */
/*   Updated: 2023/12/06 16:59:17 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_sort_simple_3(t_push **stack_a, int *min)
{
	if ((*stack_a)->index == min[0] && (*stack_a)->next->index != min[1])
	{
		ft_sa(stack_a);
		ft_ra(stack_a);
	}
	else if ((*stack_a)->index == min[1] && (*stack_a)->next->index != min[0])
		ft_rra(stack_a);
	else if ((*stack_a)->index == min[1] && (*stack_a)->next->index == min[0])
		ft_sa(stack_a);
	else if ((*stack_a)->index != min[0] && (*stack_a)->index != min[1])
	{
		if ((*stack_a)->next->index == min[0])
			ft_ra(stack_a);
		else
		{
			ft_sa(stack_a);
			ft_rra(stack_a);
		}
	}
}

static void	ft_new_min(int *min)
{
	min[0] = 1;
	min[1] = 2;
}

static void	ft_s_4(t_push **stack_a, t_push **stack_b, int *min, int dis)
{
	int	min_4[2];

	min_4[0] = 2;
	min_4[1] = 3;
	dis = ft_get_distance(stack_a, min);
	if (dis == 1)
		ft_sa(stack_a);
	else if (dis == 2)
	{
		ft_ra(stack_a);
		ft_ra(stack_a);
	}
	else if (dis == 3)
		ft_rra(stack_a);
	if (ft_list_sorted(stack_a))
		return ;
	ft_pb(stack_a, stack_b);
	if (ft_lstsize_push_swap(*stack_b) == 2)
		ft_sort_simple_3(stack_a, min_4);
	else
	{
		ft_new_min(min);
		ft_sort_simple_3(stack_a, min);
	}
	ft_pa(stack_a, stack_b);
}

static void	ft_s_5(t_push **stack_a, t_push **stack_b, int *min, int dis)
{
	int	min_5[2];

	min_5[0] = 1;
	min_5[1] = 2;
	dis = ft_get_distance(stack_a, min);
	if (dis == 1)
		ft_sa(stack_a);
	else if (dis == 2)
	{
		ft_ra(stack_a);
		ft_sa(stack_a);
	}
	else if (dis == 3)
	{
		ft_rra(stack_a);
		ft_rra(stack_a);
	}
	else if (dis == 4)
		ft_rra(stack_a);
	ft_pb(stack_a, stack_b);
	ft_s_4(stack_a, stack_b, min_5, dis);
	ft_pa(stack_a, stack_b);
}

void	ft_sort_simple(t_push **stack_a, t_push **stack_b, int list_size)
{
	int	min[2];
	int	distance;

	distance = 0;
	min[0] = 0;
	min[1] = 1;
	if (list_size == 2)
		ft_sa(stack_a);
	else if (list_size == 3)
		ft_sort_simple_3(stack_a, min);
	else if (list_size == 4)
		ft_s_4(stack_a, stack_b, min, distance);
	else if (list_size == 5)
		ft_s_5(stack_a, stack_b, min, distance);
}
