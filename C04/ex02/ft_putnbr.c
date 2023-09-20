/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:42:25 by rtonar            #+#    #+#             */
/*   Updated: 2023/09/14 17:22:24 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	tmpnb;
	char	__buff;

	tmpnb = nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		tmpnb = -tmpnb;
	}
	if (tmpnb >= 10)
	{
		ft_putnbr(tmpnb / 10);
	}
	__buff = tmpnb % 10 + '0';
	write(1, &__buff, 1);
}

// int	main(void)
// {

// 	ft_putnbr(-2147483648);
// 	return (0);
// }
