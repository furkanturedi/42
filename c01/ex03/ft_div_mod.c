/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fturedi <fturedi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:04:38 by fturedi           #+#    #+#             */
/*   Updated: 2024/02/08 23:22:19 by fturedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if(b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

#include <stdio.h>

int main()
{

	int bolum;
	int kalan;
	
	int x = 104;
	int y = 5;
	
	ft_div_mod(x, y, &bolum, &kalan);
	
	printf("bolum:%d     kalan:%d",bolum,kalan);
	
}