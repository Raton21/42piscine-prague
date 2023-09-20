/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:51:03 by rtonar            #+#    #+#             */
/*   Updated: 2023/09/11 16:51:03 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int main() 
{
    int j = 0;
    char tst[] = "Mirku\n";
    printf("%s",tst);
    j = ft_str_is_printable(tst);
    printf("\nfinal:%d",j);

    return 0;
}
*/
