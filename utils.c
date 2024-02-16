/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:51:35 by alvicina          #+#    #+#             */
/*   Updated: 2023/12/06 16:01:53 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(char **argv)
{
	size_t	i;

	i = 0;
	while (argv[i])
	{
		free(argv[i]);
		i++;
	}
	free(argv);
}

void	ft_free_stack(t_push **stack)
{
	t_push	*temp;

	while (*stack)
	{
		temp = *stack;
		*stack = (*stack)->next;
		free(temp);
	}
	free(stack);
}

int	ft_list_sorted(t_push **stack_a)
{
	t_push	*hd;

	hd = *stack_a;
	while (hd && hd->next)
	{
		if (hd->value > hd->next->value)
			return (0);
		hd = hd->next;
	}
	return (1);
}

int	ft_get_distance(t_push **stack_a, int *min)
{
	t_push	*hd;
	int		distance;

	hd = *stack_a;
	distance = 0;
	while (hd)
	{
		if (hd->index == min[0])
			break ;
		distance++;
		hd = hd->next;
	}
	return (distance);
}
