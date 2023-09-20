/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:12:18 by rtonar            #+#    #+#             */
/*   Updated: 2023/09/18 13:33:41 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, power -1));
}

/* #include <stdio.h>
int main()
{
	printf("result: %d\n",ft_iterative_power(20,20));
} */