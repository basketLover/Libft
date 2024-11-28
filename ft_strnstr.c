/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariserr <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 18:52:26 by mariserr          #+#    #+#             */
/*   Updated: 2023/11/20 14:38:07 by mariserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (*needle == '\0')
	{
		return ((char *) haystack);
	}
	while (*haystack != '\0' && len >= needle_len)
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
			return ((char *) haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
/*
int	main()
{
	char haystack[] = "I love basketball";
	char needle[] = "love";
	size_t len = 7;
	char *result = ft_strnstr(haystack, needle, len);
	char *result2 = strnstr(haystack, needle, len);
	printf("%s\n", result);
	printf("%s\n", result2);
	return (0);
}*/
