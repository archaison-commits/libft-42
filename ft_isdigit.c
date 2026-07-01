/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 16:26:36 by brechied          #+#    #+#             */
/*   Updated: 2026/06/15 19:46:54 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int a)
{
	if (a < 0 || a > 9)
		return (0);
	return (1);
}
/*
int	main(void)
{
	char	a = "20";
	printf("%d\n", ft_isdigit(a));
	if (isalnum(a))
		printf("%c is alphanumeric", a);
	else
		printf("%c is not alphanumeric", a);
	return (0);
}*/
