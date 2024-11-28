/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariserr <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:36:52 by mariserr          #+#    #+#             */
/*   Updated: 2023/11/16 17:45:21 by mariserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char) s1[i] != (unsigned char) s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
	char s1[] = "abcg";
	char s2[] = "abcv";
	char s3[] = "abcg";
	char s4[] = "abcv"; 
	int result = ft_strncmp(s1, s2, 3);
	int result2 = strncmp(s3, s4, 3);
	printf("%d\n", result);
	printf("%d\n", result2);
	return (0);
}*/
