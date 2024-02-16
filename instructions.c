/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:51:48 by alvicina          #+#    #+#             */
/*   Updated: 2023/12/06 17:08:04 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_swap(t_push **stack)
{
	t_push	*nxt;
	int		temp_value;
	int		temp_index;

	if (ft_lstsize_push_swap(*stack) < 2)
		return (-1);
	nxt = (*stack)->next;
	temp_value = (*stack)->value;
	temp_index = (*stack)->index;
	(*stack)->value = nxt->value;
	(*stack)->index = nxt->index;
	nxt->value = temp_value;
	nxt->index = temp_index;
	return (0);
}

int	ft_sa(t_push **stack_a)
{
	if (ft_swap(stack_a) == -1)
		return (-1);
	ft_putendl_fd("sa", 1);
	return (0);
}

int	ft_sb(t_push **stack_b)
{
	if (ft_swap(stack_b) == -1)
		return (-1);
	ft_putendl_fd("sb", 1);
	return (0);
}

int	ft_ra(t_push **stack_a)
{
	if (ft_rotate(stack_a) == -1)
		return (-1);
	ft_putendl_fd("ra", 1);
	return (0);
}

int	ft_rb(t_push **stack_b)
{
	if (ft_rotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rb", 1);
	return (0);
}
