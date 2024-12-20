/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariserr <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:30:59 by mariserr          #+#    #+#             */
/*   Updated: 2023/11/21 10:52:52 by mariserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (s1[len])
		len++;
	str = (char *) malloc ((len + 1) * sizeof (char));
	if (str == NULL)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main()
{
	char	s1[] = "I love basketball";
	char	*str = ft_strdup(s1);
	printf("%s\n", str);
	free(str);
	return (0);
}*/
