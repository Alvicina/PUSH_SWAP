/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 10:48:35 by alvicina          #+#    #+#             */
/*   Updated: 2023/12/06 16:01:53 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Crea un nuevo nodo y devuelve un puntero al mismo

t_push	*ft_lstnew_push_swap(int value)
{
	t_push	*list;

	list = ft_calloc(1, sizeof(t_push));
	if (list == 0)
		return (0);
	list->value = value;
	list->index = -1;
	list->next = 0;
	return (list);
}

/*Añade el nodo ’new’ al final de la lista ’lst’.*/

void	ft_lstadd_back_push_swap(t_push **stack_a, t_push *list)
{
	t_push	*p;

	if (*stack_a)
	{
		p = ft_lstlast_push_swap(*stack_a);
		p->next = list;
	}
	else
		*stack_a = list;
}

/*Devuelve el último nodo de la lista.*/

t_push	*ft_lstlast_push_swap(t_push *list)
{
	while (list != 0)
	{
		if (list->next == 0)
			return (list);
		list = list->next;
	}
	return (list);
}

/*Cuenta el número de nodos de una lista.*/
int	ft_lstsize_push_swap(t_push *list)
{
	size_t	i;

	i = 0;
	while (list != 0)
	{
		list = list->next;
		i++;
	}
	return (i);
}
