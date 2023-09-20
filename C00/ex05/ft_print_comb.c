/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 21:55:58 by rtonar            #+#    #+#             */
/*   Updated: 2023/09/07 18:05:36 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_numbers(int i, int j, int k)
{
	char	a;
	char	b;
	char	c;

	a = '0' + i;
	b = '0' + j;
	c = '0' + k;
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 9)
	{
		j = i + 1;
		while (j <= 9)
		{
			k = j + 1;
			while (k <= 9)
			{
				print_numbers(i, j, k);
				if (i != 7)
					write(1, ", ", 2);
				k++;
			}
			k = 0;
			j++;
		}
		j = 0;
		i++;
	}
}

 int	main(void)
 {
 	ft_print_comb();
 	return (0);
 }
