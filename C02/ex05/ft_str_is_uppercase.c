/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:50:59 by rtonar            #+#    #+#             */
/*   Updated: 2023/09/11 16:50:59 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
    char tst[] = "Mirku";
    printf("%s",tst);
    j = ft_str_is_uppercase(tst);
    printf("\nfinal:%d",j);

    return 0;
}
*/
