/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_three.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:01:32 by alvicina          #+#    #+#             */
/*   Updated: 2023/12/06 16:01:53 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_push(t_push **stack_to, t_push **stack_from)
{
	t_push	*hd_from;
	t_push	*hd_to;

	if (ft_lstsize_push_swap(*stack_from) == 0)
		return (-1);
	hd_from = (*stack_from)->next;
	hd_to = *stack_to;
	if (*stack_to == NULL)
	{
		*stack_to = *stack_from;
		(*stack_to)->next = NULL;
		*stack_from = hd_from;
	}
	else
	{
		*stack_to = *stack_from;
		(*stack_from)->next = hd_to;
		*stack_from = hd_from;
	}
	return (0);
}

int	ft_pa(t_push **stack_a, t_push **stack_b)
{
	if (ft_push(stack_a, stack_b) == -1)
		return (-1);
	ft_putendl_fd("pa", 1);
	return (0);
}

int	ft_pb(t_push **stack_a, t_push **stack_b)
{
	if (ft_push(stack_b, stack_a) == -1)
		return (-1);
	ft_putendl_fd("pb", 1);
	return (0);
}
