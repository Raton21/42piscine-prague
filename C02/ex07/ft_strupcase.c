/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:05:41 by rtonar            #+#    #+#             */
/*   Updated: 2023/09/12 13:22:02 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] -32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main() 
{
	char tst[] = "ahoJ zikmUNDe 54 69 \n";
	printf("%s\n",tst);
	ft_strupcase(tst);
	printf("\nfinal:%s",tst);
	return 0;
}
*/
