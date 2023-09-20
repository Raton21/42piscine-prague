/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:31:04 by rtonar            #+#    #+#             */
/*   Updated: 2023/09/10 17:31:04 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	tmp;

	*mod = a % b;
	tmp = a - *mod;
	*div = tmp / b;
}
/*
int main()
{
    int i = 200;
    int j = 7;
    int divided;
    int reminder;
    printf("dividing %d by %d\n",i,j);
    ft_div_mod(i,j,&divided,&reminder);
    printf("result:%d and reminder %d\n",divided,reminder);

    return 0;
}
*/
