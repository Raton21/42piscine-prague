/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:14:59 by rtonar            #+#    #+#             */
/*   Updated: 2023/09/12 18:52:24 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char	*start;
	int		i;

	i = 0;
	start = dest;
	while (*src != '\0' && size > 1)
	{
		*dest = *src;
		dest++;
		src++;
		size--;
		i++;
	}
	*dest = '\0';
	return (i);
}

/*
#include <stdio.h>
#include <string.h>
int main() {
    char src[50] = "I-hate-pointers";
    char dest[50];

    // Case 1: Normal copy
    ft_strlcpy(dest, src, sizeof(dest));
    printf("Copied string: %s\n", dest);

    // Case 2: Size is zero
    ft_strlcpy(dest, src, 0);
    printf("Copied string with size zero: %s\n", dest);

    // Case 3: Size is less than the length of src
    ft_strlcpy(dest, src, 3);
    printf("Copied string with size less than length of src: %s\n", dest);

    // Case 4: Size is exactly the length of src
    ft_strlcpy(dest, src, strlen(src));
    printf("Copied string with size equal to length of src: %s\n", dest);

    return 0;
}
*/
