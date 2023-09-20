/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:59:32 by rtonar            #+#    #+#             */
/*   Updated: 2023/09/18 18:49:13 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	len;

	len = 0;
	while (argv[0][len] != '\0')
	{
		len++;
	}
	write(1, argv[0], len);
	write(1, "\n", 1);
	len = argc;
	return (0);
}
