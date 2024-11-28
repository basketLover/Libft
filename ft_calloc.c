/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariserr <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 09:29:16 by mariserr          #+#    #+#             */
/*   Updated: 2023/11/21 10:24:17 by mariserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp;
	size_t			i;

	temp = malloc (count * size);
	i = 0;
	if (!temp)
		return (NULL);
	while (i < count * size)
		temp[i++] = 0;
	return (temp);
}
/*
int main() {
    size_t count = 5;
    size_t size = sizeof(int);
    int *array = (int *)ft_calloc(count, size);
	int *array2 = (int *)calloc(count, size);
    printf("Memory contents: ");
    for (size_t i = 0; i < count; ++i) {
        printf("%d ", array[i]);
    }
	printf("\n");
	for (size_t i = 0; i< count; ++i)
	{
		printf("%d ", array2[i]);
	}
    printf("\n");
	free(array);
	free(array2);
    return 0;
}*/
