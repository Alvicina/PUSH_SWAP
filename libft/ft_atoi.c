/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:45:04 by alvicina          #+#    #+#             */
/*   Updated: 2023/12/06 18:33:41 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The atoi() function converts the initial portion of the string pointed to
by str to int representation. 1) Buscamos donde empieza el numero filtrando 
para quitar la basurilla. Despues de un signo - o + tiene que empezar el
el numero. Si el numero no cabe en 8 bytes (long int), devolvemos -1 si es 
positivo o 0 si es negativo.
*/

#include "libft.h"
/*
long	ft_atoi(const char *str);

int	main(void)
{
	char	str1[] = "2147483648";
	char	str2[] = "-    1234b12";
	char	str3[] = "-a1234b12";
	char	str4[] = "+a1234b12";
	char	str5[] = "		1234b12";
	char	str6[] = "+1234";
	char	str7[] = "-1234";
	char	str8[] = "-a1234";
	char	str9[] = "+a1234";
	char	str10[] = "92233720368547758021";

	printf("%ld ft test1\n", ft_atoi(str1));
	printf("%d or test1\n", atoi(str1));
	printf("%ld ft test2\n", ft_atoi(str2));
	printf("%d or test2\n", atoi(str2));
	printf("%ld ft test3\n", ft_atoi(str3));
	printf("%d or test3\n", atoi(str3));
	printf("%ld ft test4\n", ft_atoi(str4));
	printf("%d or test4\n", atoi(str4));
	printf("%ld ft test5\n", ft_atoi(str5));
	printf("%d or test5\n", atoi(str5));
	printf("%ld ft test6\n", ft_atoi(str6));
	printf("%d or test6\n", atoi(str6));
	printf("%ld ft test7\n", ft_atoi(str7));
	printf("%d or test7\n", atoi(str7));
	printf("%ld ft test8\n", ft_atoi(str8));
	printf("%d or test8\n", atoi(str8));
	printf("%ld ft test9\n", ft_atoi(str9));
	printf("%d or test9\n", atoi(str9));
	printf("%ld ft test10\n", ft_atoi(str10));
	printf("%d or test10\n", atoi(str10));
	return (0);
}
*/
long	ft_atoi(const char *str)
{
	long				i;
	int					neg;
	unsigned long int	num_atoi;	

	i = 0;
	neg = 1;
	num_atoi = 0;
	while (str[i] != 0 && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		num_atoi = num_atoi * 10 + str[i] - 48;
		i++;
	}
	return (num_atoi * neg);
}
