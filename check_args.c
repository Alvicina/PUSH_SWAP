/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:17:55 by alvicina          #+#    #+#             */
/*   Updated: 2023/12/06 15:34:21 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_duplicate(long temp, char **numbs, size_t i)
{
	i++;
	while (numbs[i])
	{
		if (ft_atoi(numbs[i]) == temp)
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_num(char *numbs)
{
	size_t	i;

	i = 0;
	if (numbs[0] == '-')
		i++;
	while (numbs[i])
	{
		if (ft_isdigit(numbs[i]) == 0)
			return (0);
		i++;
	}
	if (numbs[0] == '-' && numbs[1] == 0)
		return (0);
	return (1);
}

void	ft_check_args(int argc, char **argv)
{
	char	**numbs;
	size_t	i;
	long	temp;

	i = 0;
	if (argc == 2)
		numbs = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		numbs = argv;
	}
	while (numbs[i])
	{
		temp = ft_atoi(numbs[i]);
		if (ft_check_num(numbs[i]) == 0)
			ft_mesg(ERR_INPUT);
		if (ft_check_duplicate(temp, numbs, i) == 0)
			ft_mesg(ERR_INPUT);
		if (temp < INT_MIN || temp > INT_MAX)
			ft_mesg(ERR_INPUT);
		i++;
	}
	if (argc == 2)
		ft_free(numbs);
}
