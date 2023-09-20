/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:32:53 by rtonar            #+#    #+#             */
/*   Updated: 2023/09/19 14:51:53 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	i = 0;
	len = (max) - min;
	if (min >= max)
	{
		range[0] = NULL;
		return (0);
	}
	range[0] = (int *)malloc(sizeof(int) * (max - min));
	if (range[0] == NULL)
		return (-1);
	while (i < len)
	{
		range[0][i] = min + i;
		i++;
	}
	return (len);
}

/* #include <stdio.h>
int main ()
{
	int min = 10;
	int max = 50;
	int i;
	int n = max-min;
	int *array;
	int length = ft_ultimate_range(&array, min, max);

	printf("%d elements in the array are:\n", length);
    for(i = 0; i < n; i++) {
        printf("%d\n", array[i]);
    } 
} */