/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 21:56:13 by brechied          #+#    #+#             */
/*   Updated: 2026/07/01 19:12:11 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	res;
	int	n;

	i = 0;
	res = 0;
	n = 1;
	while (nptr[i] == ' ' || (nptr[i] > 8 && nptr[i] < 14))
		i++;
	if (nptr[i] == '-')
	{
		n *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + nptr[i] - '0';
		i++;
	}
	return (res * n);
}
/*
int	main(void)
{
	char	n1[] = "    \n \f \r -2134sa4";
	char	n2[] = "";
	char	n3[] = " -++-1234ab";
	
	printf("original function%d\n",atoi(n1));
	printf("n1:%d\n", ft_atoi(n1));
	printf("n2:%d\n", ft_atoi(n2));
	printf("n3:%d\n", atoi(n2));
	return (0);
}*/
