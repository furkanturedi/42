/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fturedi <fturedi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:29:36 by fturedi           #+#    #+#             */
/*   Updated: 2024/02/11 19:36:42 by fturedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int	is_printable;
	int	i;

	is_printable = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 31 && str[i] <= 127))
		{
			is_printable = 0;
		}
		i++;
	}
	return (is_printable);
}

#include <stdio.h>
int main()
{
	char str[]= "\n";
	
    
	printf("%d",ft_str_is_printable(str));
	
}