/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:14:24 by rtonar            #+#    #+#             */
/*   Updated: 2023/09/20 11:45:56 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*data;
	int	i;

	i = 0;
	len = (max) - min;
	if (min >= max)
		return (NULL);
	data = (int *) malloc (len * sizeof (int));
	while (i < len)
	{
		data[i] = min + i;
		i++;
	}
	return (data);
}

/* #include <stdio.h>
int main ()
{
	int min = 0;
	int max = 0;
	int i;
	int n = max-min;
	int *array = ft_range(min,max);

	printf("Elements in the array are:\n");
    for(i = 0; i < n; i++) {
        printf("%d\n", array[i]);
    }
} */