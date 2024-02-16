/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_bis.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:49:07 by alvicina          #+#    #+#             */
/*   Updated: 2023/12/06 17:10:45 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_reverse_rotate(t_push **stack)
{
	t_push	*hd;
	t_push	*tl;

	if (ft_lstsize_push_swap(*stack) < 2)
		return (-1);
	hd = *stack;
	tl = ft_lstlast_push_swap(*stack);
	while (hd)
	{
		if (hd->next->next == NULL)
			break ;
		hd = hd->next;
	}
	hd->next = NULL;
	tl->next = *stack;
	*stack = tl;
	return (0);
}

int	ft_rotate(t_push **stack)
{
	t_push	*hd;
	t_push	*tl;

	if (ft_lstsize_push_swap(*stack) < 2)
		return (-1);
	hd = *stack;
	tl = ft_lstlast_push_swap(*stack);
	*stack = (*stack)->next;
	hd->next = NULL;
	tl->next = hd;
	return (0);
}

int	ft_rra(t_push **stack_a)
{
	if (ft_reverse_rotate(stack_a) == -1)
		return (-1);
	ft_putendl_fd("rra", 1);
	return (0);
}

int	ft_rrb(t_push **stack_b)
{
	if (ft_reverse_rotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rrb", 1);
	return (0);
}

int	ft_rrr(t_push **stack_a, t_push **stack_b)
{
	if (ft_reverse_rotate(stack_a) == -1)
		return (-1);
	if (ft_reverse_rotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rrr", 1);
	return (0);
}
