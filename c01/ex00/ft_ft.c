/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fturedi <fturedi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:54:51 by fturedi           #+#    #+#             */
/*   Updated: 2024/02/08 22:37:43 by fturedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

#include <stdio.h>
int main()
{
	int a;
	int nbr;
	a = 25;

	printf("%d\n",a);
	nbr = &a;
	ft_ft(&a);
	printf("%d",a);	
}