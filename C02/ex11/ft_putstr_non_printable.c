/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:55:49 by rtonar            #+#    #+#             */
/*   Updated: 2023/09/12 20:12:36 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(char c)
{
	char	out[2];
	char	hex[16];

	hex[0] = '0';
	hex[1] = '1';
	hex[2] = '2';
	hex[3] = '3';
	hex[4] = '4';
	hex[5] = '5';
	hex[6] = '6';
	hex[7] = '7';
	hex[8] = '8';
	hex[9] = '9';
	hex[10] = 'a';
	hex[11] = 'b';
	hex[12] = 'c';
	hex[13] = 'd';
	hex[14] = 'e';
	hex[15] = 'f';
	out[0] = hex[(c >> 4) & 0xF];
	out[1] = hex[c & 0xF];
	write(1, "\\", 1);
	write(1, out, 2);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~')
		{
			ft_putchar(str[i]);
		}
		else
		{
			print_hex(str[i]);
		}
		i++;
	}
}

/*
int main() {
    char test[]="Coucou\ntu vas bien ?";
    ft_putstr_non_printable(test);
    return 0;
}
*/