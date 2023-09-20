/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:22:58 by rtonar            #+#    #+#             */
/*   Updated: 2023/09/18 10:35:26 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int		result;
	int		i;
	int		is_negative;

	is_negative = 0;
	result = 0;
	i = 0;
	while (str[i] == '+' || str[i] == '-' || str[i] == ' ' )
	{
		if (str[i] == '-')
		{
			is_negative = !is_negative;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' )
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	if (is_negative)
	{
		result = -result;
	}
	return (result);
}

//checks if the base is invalid
int	is_invalid(char *str)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = 0;
	while (str[len] != '\0')
		len++;
	if (len < 2)
		return (0);
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (str[i] == str[j] || str [j] == '+' || str [j] == '-')
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

//function responsible for switching bases and writing them by calling putchar
void	nmb_job(int nbr, char *base)
{
	int		len;

	len = 0;
	if (nbr < 0)
	{
		printf("-");
		nbr = -nbr;
	}
	while (base[len])
		len ++;
	if (nbr >= len)
	{
		nmb_job(nbr / len, base);
		nmb_job(nbr % len, base);
	}
	else
		printf("%c",base[nbr]);
}

//function to be called. If base is invalid, it exits. otherwise calls nmb_job

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	nbr;

	i = is_invalid(base);
	nbr = ft_atoi(str);
	if (i == 1)
	{
		nmb_job(nbr, base);
	}
	else
	{
		return (0);
	}
	return (nbr);
}


int	main(void)
{
	ft_atoi_base("   +--200","0123456789ABCDEF");
	return (0);
}
