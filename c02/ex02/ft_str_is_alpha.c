/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fturedi <fturedi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:29:24 by fturedi           #+#    #+#             */
/*   Updated: 2024/02/11 19:32:55 by fturedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int cont_only_alph_char;
	int i;

	cont_only_alph_char = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
		{
			cont_only_alph_char = 0;
		}
		i++;
	}
	return (cont_only_alph_char);
}

#include <stdio.h>
int main()
{
	char str[]= "123456";
	
    
	printf("%d",ft_str_is_alpha(str));
	
}
