/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 19:58:49 by brechied          #+#    #+#             */
/*   Updated: 2026/06/23 22:55:29 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	d;
	size_t	s;
	size_t	i;

	d = 0;
	while (d < size && dest[d] != '\0')
		d++;
	s = 0;
	while (src[s] != '\0')
		s++;
	if (d == size)
		return (size + s);
	i = 0;
	while (d + i < size - 1 && src[i] != '\0')
	{
		dest[d + i] = src[i];
		i++;
	}
	if (d + i < size)
		dest[d + i] = '\0';
	return (d + s);
}
/*
int	main(void)
{
        char    dest[100] = "Please let me in";
        char    src[100] = "Maybe not";
	char    dest1[100] = "Please let me in";
        char    src1[100] = "Maybe not";

        unsigned int    size = 10;

	printf(":%ld\n", ft_strlcat(dest, src, size));
	printf(":%ld\n", strlcat(dest1, src1, size));
	printf(":%s\n", dest);
	return (0);
}*/
