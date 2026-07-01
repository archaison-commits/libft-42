/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 16:04:44 by brechied          #+#    #+#             */
/*   Updated: 2026/06/23 19:50:07 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int		i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (size > 0)
	{
		while (src[j] != '\0' && j < size - 1)
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}
	return (i);
}
/*
int	main(void)
{
	char	src[100] = "I broke my hands while coding";
	char	dest[100];
	char	d2[100];

	//printf("my function %ld\n", ft_strlcpy(dest, src, 10));
	//printf("%s\n", d2);
	printf("not my function %ld\n", strlcpy(dest, src, 10));
	printf("not my function %s\n", dest);
	return (0);

}*/
