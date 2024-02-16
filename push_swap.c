/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:44:38 by alvicina          #+#    #+#             */
/*   Updated: 2023/12/07 16:42:46 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_init_stack_a(t_push **stack_a, int argc, char **argv)
{
	t_push	*list;
	char	**args;
	size_t	i;

	i = 0;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		args = argv;
	}
	while (args[i])
	{
		list = ft_lstnew_push_swap(ft_atoi(args[i]));
		ft_lstadd_back_push_swap(stack_a, list);
		i++;
	}
	ft_put_index(stack_a);
	if (argc == 2)
		ft_free(args);
}

static void	ft_sort(t_push **stack_a, t_push **stack_b)
{
	int	list_size;

	list_size = ft_lstsize_push_swap(*stack_a);
	if (list_size <= 5)
		ft_sort_simple(stack_a, stack_b, list_size);
	else
		ft_radix_sort(stack_a, stack_b);
}

int	main(int argc, char **argv)
{
	t_push	**stack_a;
	t_push	**stack_b;

	if (argc < 2)
		return (-1);
	ft_check_args(argc, argv);
	stack_a = malloc(sizeof(t_push));
	stack_b = malloc(sizeof(t_push));
	*stack_a = NULL;
	*stack_b = NULL;
	ft_init_stack_a(stack_a, argc, argv);
	if (ft_list_sorted(stack_a))
	{
		ft_free_stack(stack_a);
		ft_free_stack(stack_b);
		return (1);
	}
	ft_sort(stack_a, stack_b);
	ft_free_stack(stack_a);
	ft_free_stack(stack_b);
	return (0);
}
