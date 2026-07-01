/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 16:18:41 by brechied          #+#    #+#             */
/*   Updated: 2026/07/01 17:34:04 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_set(char const *s, char c)
{
	while (*s && *s != c)
		s++;
	return (*s == c);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	if (!set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (is_set(set, s1[start]))
		start++;
	if (start >= end)
		return (ft_strdup(""));
	while (end > start && is_set(set, s1[end - 1]))
		end--;
	res = ft_substr(s1, start, (end - start));
	if (!res)
		return (NULL);
	return (res);
}
/*
int main(void)
{
    char *s1 = "1212121212send Help121212";
    char *set = "12";
    printf("%s\n", ft_strtrim(s1, set));
    return (0);
}*/
