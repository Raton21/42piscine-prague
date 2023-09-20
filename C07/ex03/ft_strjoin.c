/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:14:47 by rtonar            #+#    #+#             */
/*   Updated: 2023/09/19 14:51:08 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

int	calculate_total_length(int size, char **strs, char *sep)
{
	int	total_length;
	int	i;

	total_length = 0;
	i = 0;
	while (i < size)
	{
		total_length += ft_strlen(strs[i]);
		i++;
	}
	total_length += ft_strlen(sep) * (size - 1) + 1;
	return (total_length);
}

void	concatenate_strings(int size, char **strs, char *sep, char *result)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
		{
			ft_strcat(result, sep);
		}
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		total_length;

	if (size == 0)
	{
		result = malloc(sizeof(char));
		result[0] = '\0';
		return (result);
	}
	total_length = calculate_total_length(size, strs, sep);
	result = malloc(total_length * sizeof(char));
	result[0] = '\0';
	concatenate_strings(size, strs, sep, result);
	return (result);
}
