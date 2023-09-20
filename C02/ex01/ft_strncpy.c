/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:50:36 by rtonar            #+#    #+#             */
/*   Updated: 2023/09/11 16:50:36 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*start;

	start = dest;
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (start);
}
/*
#include <stdio.h>

int main() {
    char str1[] = "I hate pointers";
    char str2[40];

    ft_strncpy(str2, str1, 20);

    printf("str2: %s\n", str2);  

    return 0;
}
*/
