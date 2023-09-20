/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:26:51 by rtonar            #+#    #+#             */
/*   Updated: 2023/09/14 19:19:21 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int		result;
	int		i;
	int		is_negative;

	is_negative = 0;
	result = 0;
	i = 0;
	while (str[i] == '+' || str[i] == '-' || str[i] == ' ' )
	{
		if (str[i] == '-')
		{
			is_negative = !is_negative;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' )
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	if (is_negative)
	{
		result = -result;
	}
	return (result);
}
/*
#include <stdlib.h>

int main() {
    // Test with positive number
    char *positive_num = "12345";
    printf("Positive number: %d\n", atoi(positive_num));
	printf("Positive number: %d\n", ft_atoi(positive_num));

    // Test with negative number
    char *negative_num = "-12345";
    printf("Negative number: %d\n", atoi(negative_num));
	printf("Negative number: %d\n", ft_atoi(negative_num));

    // Test with zero
    char *zero = "0";
    printf("Zero: %d\n", atoi(zero));
	printf("Zero: %d\n", ft_atoi(zero));

    // Test with non-numeric characters
    char *non_numeric = "123abc";
    printf("Non-numeric characters: %d\n", atoi(non_numeric));
	printf("Non-numeric characters: %d\n", ft_atoi(non_numeric));

    // Test with leading spaces
    char *leading_spaces = "   12345";
    printf("Leading spaces: %d\n", atoi(leading_spaces));
	printf("Leading spaces: %d\n", ft_atoi(leading_spaces));

    // Test with empty string
    char *empty_string = "";
    printf("Empty string: %d\n", atoi(empty_string));
	printf("Empty string: %d\n", ft_atoi(empty_string));

    return 0;
}
*/
// int main(void)
// {
// 	char test[] = " ---+--+1234ab567";
// 	int j = ft_atoi(test);
// 	printf("final-result:%d\n",j);
// }