/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fturedi <fturedi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:29:34 by fturedi           #+#    #+#             */
/*   Updated: 2024/02/11 19:35:36 by fturedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int is_uppercase;
	int i;

	is_uppercase = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			is_uppercase = 0;
		}
		i++;
	}
	return (is_uppercase);
}

#include <stdio.h>
int main()
{
	char str[]= "ADSFGH";
	
    
	printf("%d",ft_str_is_uppercase(str));
	
}