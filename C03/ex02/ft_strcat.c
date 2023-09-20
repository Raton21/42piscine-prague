/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:42:34 by rtonar            #+#    #+#             */
/*   Updated: 2023/09/13 14:46:33 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*tmp;

	tmp = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (tmp);
}

// #include <stdio.h>
// #include <string.h>
// int main() {
//     char dest[50] = "Hello";
//     char src[50] = " World";

//     ft_strcat(dest, src);
//     printf("Resulting String: %s\n", dest);

//     return 0;
// }
