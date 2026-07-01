/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 17:51:56 by brechied          #+#    #+#             */
/*   Updated: 2026/06/23 16:02:56 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*big_i;
	const char	*little_i;
	size_t		len_i;

	if (*little == '\0')
		return ((char *)big);
	while (*big && len > 0)
	{
		big_i = big;
		little_i = little;
		len_i = len;
		while (*big_i == *little_i && *big_i && 1 < len_i)
		{
			big_i++;
			little_i++;
			len_i--;
		}
		if (*little_i == '\0')
			return ((char *)big);
		big++;
		len--;
	}
	return (0);
}
/*
int	main(void)
{
	char	*big = "Send help right now, there is no toilet papier";
	char	*little = "toilet";
	char	*test = strnstr(big, little, 40);

	printf("original function:%s\n", test);
	printf("my function:%s\n", ft_strnstr(big, little, 40));
	return (0);
}*/
