/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariserr <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:51:28 by mariserr          #+#    #+#             */
/*   Updated: 2023/11/28 11:38:09 by mariserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (s[length] != '\0')
	{
		length ++;
	}
	return (length);
}
/*
int main()
{
	const char *str = "Go, Valencia Basket!";
	printf("%zu\n", ft_strlen(str));
	return (0);
}*/
