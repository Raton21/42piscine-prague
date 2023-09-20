/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:50:47 by rtonar            #+#    #+#             */
/*   Updated: 2023/09/11 16:50:47 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
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
    char tst[] = "Hello World";
    printf("%s",tst);
    j = ft_str_is_alpha(tst);
    printf("\nfinal:%d",j);

    return 0;
}
*/
