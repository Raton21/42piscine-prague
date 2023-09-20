/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:42:46 by rtonar            #+#    #+#             */
/*   Updated: 2023/09/14 13:55:06 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcat(char *dst, const char *src, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size && dst[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		if (i < size - 1)
		{
			dst[i] = src[j];
			i++;
		}
		j++;
	}
	if (i < size)
	{
		dst[i] = '\0';
	}
	return (i + j - 1);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     // Test 1: Normal case
//     char dest1[20] = "Hello";
//     char src1[] = " World";
//     ft_strlcat(dest1, src1, sizeof(dest1));
//     printf("%s\n", dest1);  // Should print: Hello World

//     // Test 2: Size is exactly the sum of lengths
//     char dest2[12] = "Hello";
//     char src2[] = " World";
//     ft_strlcat(dest2, src2, sizeof(dest2));
//     printf("%s\n", dest2);  // Should print: Hello World

//     // Test 3: Size is less than the length of destination
//     char dest3[20] = "Hello";
//     char src3[] = " World";
//     ft_strlcat(dest3, src3, strlen(dest3));
//     printf("%s\n", dest3);  // Should print: Hello

//     // Test 4: Size is zero
//     char dest4[20] = "Hello";
//     char src4[] = " World";
//     ft_strlcat(dest4, src4, 0);
//     printf("%s\n", dest4);  // Should print: Hello

//     // Test 5: Destination buffer is not large enough
//     char dest5[10] = "Hello";
//     char src5[] = " World";
//     ft_strlcat(dest5, src5, sizeof(dest5));
//     printf("%s\n", dest5);  // Should print: Hello Wor

//     return 0;
// }
