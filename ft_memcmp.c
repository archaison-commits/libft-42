/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 14:53:16 by brechied          #+#    #+#             */
/*   Updated: 2026/06/22 16:44:31 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*ob1;
	unsigned const char	*ob2;

	ob1 = (unsigned const char *)s1;
	ob2 = (unsigned const char *)s2;
	while (n > 0)
	{
		if (*ob1 != *ob2)
			return (*ob1 - *ob2);
		ob1++;
		ob2++;
		n--;
	}
	return (0);
}
/*
int	main(void)
{
	int ar1[] = {1, 2 ,3 ,4};
	int ar2[] = {1, 2 ,3};
	char s1[] = "HELP";
	char s2[] = "HELp";

	printf("original functio with strings:%d\n",
       		memcmp(s1, s2, 3 * sizeof(int)));
	printf("my function with strings:%d\n",
       		ft_memcmp(s1, s2, 3 * sizeof(int)));
	printf("original functio with arrays:%d\n",
       		memcmp(ar2, ar1, 3 * sizeof(int)));
	printf("my function with arrays:%d\n",
       		ft_memcmp(ar2, ar1, 3 * sizeof(int)));
	return (0);
}*/
