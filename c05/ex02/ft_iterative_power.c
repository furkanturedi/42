/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fturedi <fturedi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 10:50:49 by fturedi           #+#    #+#             */
/*   Updated: 2024/02/14 11:13:24 by fturedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	i = 1;
	result = 1;
	if (power < 0)
		return (0);
	while (i <= power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
