/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:21:12 by rtonar            #+#    #+#             */
/*   Updated: 2023/09/18 12:47:28 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0 || index == 1)
	{
		return (index);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/* #include <stdio.h>
int main(void)
{
	int i = 0;
	while (i <= 20)
	{
		printf("%dth number is:%d\n",i,ft_fibonacci(i));
		i++;
	}
	return 0;
} */
