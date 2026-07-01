/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 22:58:45 by brechied          #+#    #+#             */
/*   Updated: 2026/07/01 16:23:30 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*cs;
	int		len;
	int		i;

	if (!*s)
		return (NULL);
	len = 0;
	while (s[len] != '\0')
		len++;
	cs = malloc(len + 1);
	if (!cs)
		return (NULL);
	i = 0;
	while (i < len)
	{
		cs[i] = s[i];
		i++;
	}
	cs[i] = '\0';
	return (cs);
}
/*
int	main(void)
{
	char	*str;
	//char	*str1;

	str = "I left my hands at home";
	ft_strdup(str);
	printf("copy: %s\n", str);
	str1 = "I left my hands at home";
        strdup(str1);
        printf("copy: %s\n", str1);
	return (0);
}*/
