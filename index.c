/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 12:35:24 by alvicina          #+#    #+#             */
/*   Updated: 2023/12/06 16:01:53 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_push	*ft_get_next_min_arg(t_push **stack_a)
{
	t_push	*min_arg;
	t_push	*first_arg;
	int		min_yes;

	min_arg = NULL;
	min_yes = 0;
	first_arg = *stack_a;
	while (first_arg)
	{
		if (first_arg->index == -1 && (min_yes == 0
				|| first_arg->value < min_arg->value))
		{
			min_yes = 1;
			min_arg = first_arg;
		}
		first_arg = first_arg->next;
	}
	return (min_arg);
}

void	ft_put_index(t_push **stack_a)
{
	t_push	*first_arg;
	int		ind;

	ind = 0;
	first_arg = ft_get_next_min_arg(stack_a);
	while (first_arg)
	{
		first_arg->index = ind++;
		first_arg = ft_get_next_min_arg(stack_a);
	}
}
