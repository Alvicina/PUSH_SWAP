/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:20:06 by alvicina          #+#    #+#             */
/*   Updated: 2023/12/06 16:59:10 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_get_max_bits(t_push **stack_a)
{
	t_push	*hd;
	int		max;
	int		max_bits;

	hd = *stack_a;
	max = (*stack_a)->index;
	max_bits = 0;
	while (hd)
	{
		if (hd->index > max)
			max = hd->index;
		hd = hd->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	ft_radix_sort(t_push **stack_a, t_push **stack_b)
{
	int	max_bits;
	int	size;
	int	j;
	int	i;

	max_bits = ft_get_max_bits(stack_a);
	size = ft_lstsize_push_swap(*stack_a);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			if ((((*stack_a)->index >> i) & 1) == 1)
				ft_ra(stack_a);
			else
				ft_pb(stack_a, stack_b);
		}
		while (ft_lstsize_push_swap(*stack_b))
			ft_pa(stack_a, stack_b);
		i++;
	}
}
