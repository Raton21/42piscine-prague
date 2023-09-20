/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:56:05 by rtonar            #+#    #+#             */
/*   Updated: 2023/09/14 13:30:23 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n--)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		else if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (0);
}
// int	ft_strncmp(char *s1, char *s2, unsigned int n)
// {
// 	return(strncmp(s1,s2,n));
// }

// #include <stdio.h> 
// int main()
// {
// 	int len = 3;
// 	char* s1 = "Hello";
// 	char* s2 = "World";
// 	char* s3 = "Helen";
// 	// compare s1 and s2 using strcmp()
// int result = ft_strncmp(s1, s2, len);
// printf("Comparing %s and %s: %d\n", s1, s2, result);

// // compare s1 and s3 using strcmp()
// result = ft_strncmp(s1, s3, len);
// printf("Comparing %s and %s: %d\n", s1, s3, result);

// return 0;
// }
