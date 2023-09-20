/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:15:26 by rtonar            #+#    #+#             */
/*   Updated: 2023/09/18 11:29:22 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// standart putchar function for writing to output
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// function to check for invalid bases (1 digit, repeating digit...)
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
		ft_putchar('-');
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
		ft_putchar(base[nbr]);
}

//function to be called. If base is invalid, it exits. otherwise calls nmb_job
void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = is_invalid(base);
	if (i == 1)
	{
		nmb_job(nbr, base);
	}
	else
	{
		return ;
	}
}

/* int	main(void)
{
	ft_putnbr_base(-200,"pa+");
	return (0);
}
 */
