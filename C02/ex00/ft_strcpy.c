/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:56:43 by rtonar            #+#    #+#             */
/*   Updated: 2023/09/11 18:30:04 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*temp;

	temp = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (temp);
}
/*
#include <stdio.h>

int main() {
    char str1[] = "I hate pointerswrhfdhdhdfhdfhdfhdhdfhdfhdfhdfhh1234";
    char str2[100];
    char *test;

    test = ft_strcpy(str2, str1);

    printf("str1: %s\n", str1);
  printf("str2: %s\n", str2);
  printf("returned: %s\n", test);  

    return 0;
}
*/
