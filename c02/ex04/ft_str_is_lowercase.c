/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fturedi <fturedi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:29:32 by fturedi           #+#    #+#             */
/*   Updated: 2024/02/11 19:34:48 by fturedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		ft_str_is_lowercase(char *str)
{
	int is_lowercase;
	int i;

	is_lowercase = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			is_lowercase = 0;
		}
		i++;
	}
	return (is_lowercase);
}

#include <stdio.h>
int main()
{
	char str[]= "1243256";
	
    
	printf("%d",ft_str_is_lowercase(str));
	
}
