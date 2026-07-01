/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 16:17:35 by brechied          #+#    #+#             */
/*   Updated: 2026/07/01 17:38:57 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	size_t	len;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	new_s = malloc(len + 1);
	if (!new_s)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new_s[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		new_s[i + j] = s2[j];
		j++;
	}
	new_s[i + j] = '\0';
	return (new_s);
}
/*
int main(void)
{
    char *s1 = "I have a fever and am still coding ";
    char *s2 = "So please, call an ambulance";
    char *res;

    res = ft_strjoin(s1, s2);
    if (!res)
    {
        printf("Allocation failed\n");
        return (1);
    }
    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);
    printf("result: %s\n", res);
    free(res);
    return (0);
}*/
