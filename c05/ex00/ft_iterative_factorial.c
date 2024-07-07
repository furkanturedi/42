/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fturedi <fturedi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 10:44:49 by fturedi           #+#    #+#             */
/*   Updated: 2024/02/14 17:55:22 by fturedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb > 0)
	{
		while (nb != 1)
		{
			result = result * (nb);
			nb--;
		}
	}
	else if (nb < 0)
		result = 0;
	return (result);
}

#include <stdio.h>

int main()
{
	printf("%d", ft_iterative_factorial(1));
}