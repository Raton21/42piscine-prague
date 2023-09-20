/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:41:32 by rtonar            #+#    #+#             */
/*   Updated: 2023/09/14 13:41:10 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*p1;
	char	*p2;

	p1 = str;
	p2 = to_find;
	if (!*str)
	{
		return (NULL);
	}
	if (!*to_find)
	{
		return (str);
	}
	while (*p1 && *p2 && *p1 == *p2)
	{
		++p1;
		++p2;
	}
	if (!*p2)
	{
		return (str);
	}
	return (ft_strstr(str + 1, to_find));
}

// int main() {
//     char str1[20] = "";
//     char str2[10] = "fuck";
//     char *res = ft_strstr(str1, str2);
//     printf("%s\n", res);
//     return 0;
// }
