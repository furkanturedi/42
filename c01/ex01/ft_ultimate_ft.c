/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fturedi <fturedi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:59:27 by fturedi           #+#    #+#             */
/*   Updated: 2024/02/08 23:16:59 by fturedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int ***nbr)
{
	***nbr = 42;
}

#include <stdio.h>

int main()
{
	int i = 5;
	int *nbr1 = &i;
	int **nbr2 = &nbr1;
	int ***nbr3 = &nbr2;
	
	printf("%d\n",i);
	ft_ultimate_ft(nbr3);
	printf("%d",i);
}