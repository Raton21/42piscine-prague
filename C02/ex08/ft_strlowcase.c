/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:05:41 by rtonar            #+#    #+#             */
/*   Updated: 2023/09/12 13:23:45 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] +32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main() 
{
	char tst[] = "AHoj ZIKmunDe 54 69 \n";
	printf("%s\n",tst);
	ft_strlowcase(tst);
	printf("\nfinal:%s",tst);
	return 0;
}
*/
