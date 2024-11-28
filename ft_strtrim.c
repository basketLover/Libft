/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariserr <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:16:10 by mariserr          #+#    #+#             */
/*   Updated: 2023/11/22 17:25:59 by mariserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include "libft.h"

static int	get_trim(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(s1) -1;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (get_trim(set, s1[i]))
		i++;
	while (get_trim(set, s1[j]))
		j--;
	return (ft_substr(s1, i, j - (i - 1)));
}
/*
int main()
{
	char s1[]  = "abababaI love basketballabababa";
	char const set[] = "ab";
	void *str = ft_strtrim(s1, set);
	printf("%s\n", str);
	free(str);
	return (0);
}*/
