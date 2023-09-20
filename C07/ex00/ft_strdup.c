/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:23:37 by rtonar            #+#    #+#             */
/*   Updated: 2023/09/18 19:51:19 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// check length of string
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

// normal string copy
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

// function to be called
char	*ft_strdup(char *src)
{
	char	*ptr;

	ptr = malloc(ft_strlen(src)+1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_strcpy(ptr, src);
	return (ptr);
}

/* #include <stdio.h>

int	main()
{
	char *original = "";
	char *duplicate;

	duplicate = ft_strdup(original);

    if(duplicate == NULL) {
        printf("Failed to duplicate string.\n");
        return 1;
    }

    printf("Original: %s\n", original);
    printf("Duplicate: %s\n", duplicate);
    free(duplicate);
    return 0;
} */