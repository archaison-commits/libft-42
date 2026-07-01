/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 16:48:46 by brechied          #+#    #+#             */
/*   Updated: 2026/06/22 17:49:03 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*ob1;

	ob1 = (unsigned const char *)s;
	while (n > 0)
	{
		if (*ob1 == (unsigned const char)c)
			return ((char *)ob1);
		ob1++;
		n--;
	}
	return (0);
}
/*
int	main(void)
{
	char	*ori = "send help";
	char	*myf = "send help";
	char	c = 'l';
	char	*res_ori = memchr(ori, c, 10);
	char	*res_myf = ft_memchr(myf, c, 10);

	printf("original function:%s\n", res_ori);
	printf("my function: %s\n", res_myf);
	return (0);
}*/
