/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 20:53:57 by brechied          #+#    #+#             */
/*   Updated: 2026/06/15 21:18:25 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c < 31 || c > 127)
		return (0);
	return (1);
}
/*
int	main(void)
{
	char	c = '\f';
	printf("%d\n", ft_isprint(c));
	return (0);
}*/
