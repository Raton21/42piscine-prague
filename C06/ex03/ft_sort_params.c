/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:40:46 by rtonar            #+#    #+#             */
/*   Updated: 2023/09/18 18:58:43 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// comparing strings
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

// function for calculating length of string
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

//sorting function
void	sort_2d_strings(char *arr[], int n)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (i < n)
	{
		j = i + 1;
		while (j < n)
		{
			if (ft_strcmp(arr[i], arr[j]) > 0)
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			j++;
		}
		i++;
	}
}

// displaying string
void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

// main function
int	main(int argc, char *argv[])
{
	int	i;

	if (argc > 1)
	{
		sort_2d_strings(argv + 1, argc - 1);
		i = 1;
		while (i < argc)
		{
			ft_putstr(argv[i]);
			ft_putstr("\n");
			i++;
		}
	}
	return (0);
}
