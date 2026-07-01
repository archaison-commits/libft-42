/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 14:49:55 by brechied          #+#    #+#             */
/*   Updated: 2026/06/23 19:45:54 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*a;

	a = (unsigned char *)s;
	while (0 < n)
	{
		*(a++) = (unsigned char) c;
		n--;
	}
	return (s);
}
/*
int	main(void)
{
	char	s1[100] = "don't say hello";

	ft_memset(s1, 'a', 7);
	printf("%s\n", s1);
	memset(s1, 'a', 7);
	printf("%s\n", s1);
	return (0);
}*/
