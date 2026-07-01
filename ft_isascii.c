/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 19:23:07 by brechied          #+#    #+#             */
/*   Updated: 2026/06/15 19:47:14 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_asascii(int c)
{
	if (c < 0 || c > 127)
		return (0);
	return (1);
}
/*
int	main(void)
{
	char	a = 'a';
	int	c = 128;
	printf("%d\n", ft_asascii(c));
	return (0);
}*/
