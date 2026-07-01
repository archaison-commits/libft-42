/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 21:52:00 by brechied          #+#    #+#             */
/*   Updated: 2026/06/17 22:46:07 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char			*d2;
	unsigned const char		*s2;

	d2 = (unsigned char *)dest;
	s2 = (unsigned const char *)src;
	while (n > 0)
	{
		*(d2++) = *(s2++);
		n--;
	}
	return (dest);
}
/*
int	main(void)
{
	int	src[20] = {1, 2, 3, 4, 5};;
	int	dest[20];
	int	i;
	
	i = 0;
	ft_memcpy(src+2, src, sizeof(int) * 10);
	while (i < 10)
	{
		printf("dest:%d\n", dest[i]);
		i++;
	}
	//printf("d: %s\n", dest);
	return (0);
}*/
