/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fturedi <fturedi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 17:39:12 by fturedi           #+#    #+#             */
/*   Updated: 2024/02/10 15:35:29 by fturedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		min = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[min])
			{
				min = j;
			}
			j++;
		}
		temp = tab[i];
		tab[i] = tab[min];
		tab[min] = temp;
		i++;
	}
}

#include <stdio.h>

int	main()
{
	int i = 0;
	int tab[8] = {7, 6,0, 1, 3, 4, 2, 5};
	int size = 8;

	ft_sort_int_tab(tab, size);
	while(i < 8)
	{
		printf("%d, ", tab[i]);
		i++;
		
	}
	
	return (0);
}