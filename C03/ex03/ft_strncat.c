/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:51:21 by rtonar            #+#    #+#             */
/*   Updated: 2023/09/13 14:52:55 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*tmp;

	tmp = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && nb > 0)
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	*dest = '\0';
	return (tmp);
}

// #include <stdio.h>
// #include <string.h>
// int main() {
//     char dest[50] = "Hello";
//     char src[50] = " World";

//     ft_strncat(dest, src);
//     printf("Resulting String: %s\n", dest);

//     return 0;
// }