/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:32:43 by rtonar            #+#    #+#             */
/*   Updated: 2023/09/10 17:32:43 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	mod;
	int	tmp;

	mod = *a % *b;
	tmp = *a - mod;
	*a = tmp / *b;
	*b = mod;
}
/*
int main()
{
    int i = 23;
    int j = 5;
    printf("dividing %d by %d\n",i,j);
    ft_ultimate_div_mod(&i,&j);
    printf("result:%d and reminder %d\n",i,j);

    return 0;
}
*/
