/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:35:09 by rtonar            #+#    #+#             */
/*   Updated: 2023/09/18 14:40:27 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	next_prime(int num)
{
	num++;
	while (!(ft_is_prime(num)))
	{
		num++;
	}
	return (num);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
	{
		return (nb);
	}
	else
	{
		return (next_prime(nb));
	}
}

/* #include <stdio.h>
int main()
{
	printf("result:%d",ft_find_next_prime(20));
} */