/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:11:59 by rtonar            #+#    #+#             */
/*   Updated: 2023/09/13 14:41:57 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

// #include <stdio.h> 
// int main()
// {
// 	char* s1 = "Hello";
// 	char* s2 = "World";
// 	char* s3 = "Hel";
// 	// compare s1 and s2 using strcmp()
// int result = ft_strcmp(s1, s2);
// printf("Comparing %s and %s: %d\n", s1, s2, result);

// // compare s1 and s3 using strcmp()
// result = ft_strcmp(s1, s3);
// printf("Comparing %s and %s: %d\n", s1, s3, result);

// return 0;
// }
