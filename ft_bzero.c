/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 19:01:43 by brechied          #+#    #+#             */
/*   Updated: 2026/07/01 19:02:22 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*a;

	a = (unsigned char *)s;
	while (0 < n)
	{
		*(a++) = 0;
		n--;
	}
	return (s);
}
/*
int	main(void)
{
	char	*s1 = "don't say hello";

	ft_memset(s1, 'a', 8 * sizeof(int));
	printf("%s\n", s1);
	memset(s1, 'a', 8 * sizeof(int));
	printf("%s\n", s1);
	return (0);
}*/
