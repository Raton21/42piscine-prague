/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:36:34 by rtonar            #+#    #+#             */
/*   Updated: 2023/09/12 18:03:30 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ch_test(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (3);
	}
	if (c >= 'a' && c <= 'z')
	{
		return (2);
	}
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ch_test(str[i]) == 2 && ch_test(str[i -1]) == 0)
		{
			str[i] = str[i] -32;
		}
		if (ch_test(str[i]) == 3 && ch_test(str[i -1]) != 0)
		{
			str[i] = str[i] +32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	test[]= "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("original:%s\n",test);
	printf("output:%s\n",ft_strcapitalize(test));

	printf("result:%s\n",test);
	
}
*/