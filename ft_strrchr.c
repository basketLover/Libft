/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariserr <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:55:04 by mariserr          #+#    #+#             */
/*   Updated: 2023/11/16 16:34:54 by mariserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*result;
	char	cc;

	i = 0;
	result = NULL;
	cc = (char) c;
	while (s[i])
	{
		if (s[i] == cc)
			result = (char *) &s[i];
		i++;
	}
	if (s[i] == cc)
		result = (char *) &s[i];
	return (result);
}
/*
int main()
{
    const char s[] = "I love basketball";
    printf("%s\n", ft_strrchr(s, 'i'));
    return (0);
}*/
