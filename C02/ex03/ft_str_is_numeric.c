/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:50:51 by rtonar            #+#    #+#             */
/*   Updated: 2023/09/11 16:50:51 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
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
    char tst[] = "123";
    printf("%s",tst);
    j = ft_str_is_numeric(tst);
    printf("\nfinal:%d",j);

    return 0;
}
*/
