/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 23:37:31 by brechied          #+#    #+#             */
/*   Updated: 2026/06/22 16:45:36 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*pos;

	while (*s)
	{
		if (*s == (char )c)
			pos = s;
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return ((char *)pos);
}
/*
int     main(void)
{
        char *s;
        char c;

        s = "Send help help now";
        c = 'e';
        printf("original Function:%s\n", strrchr(s, c));
        printf("mimic:%s\n", ft_strrchr(s, c));
        return (0);
}*/
