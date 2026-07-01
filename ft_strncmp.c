/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 23:47:08 by brechied          #+#    #+#             */
/*   Updated: 2026/06/18 00:01:21 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 == *s2 && *s1 && 1 < n)
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}
/*
int	main(void)
{
	char	*s = "send help";
	char	*s1 = "send";
	char	*s2 = "";
        char    *s3 = "helloooooooooooooooooooooooooo0";
        printf("%s\n%s\nft_strncmp -> %d\nstrncmp-> %d\n\n\n",
       	s, s1, ft_strncmp(s, s1, 0), strncmp(s, s1, 0));
	printf("%s\n%s\nft_strncmp -> %d\nstrncmp-> %d\n\n\n",
       	s2, s3, ft_strncmp(s2, s3, 8), strncmp(s2, s3, 8));
        printf("strcmp: %d\n", ft_strncmp(s, s1, 9));
	return (0);
}*/
