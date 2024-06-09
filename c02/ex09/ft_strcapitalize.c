/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fturedi <fturedi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:29:45 by fturedi           #+#    #+#             */
/*   Updated: 2024/02/11 21:44:30 by fturedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	unsigned int i;

	if (str[0] != '\0' && str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (((str[i] >= 'a' && str[i] <= 'z') ||
					(str[i] >= 'A' && str[i] <= 'Z')) && (str[i - 1] < '0' ||
					(str[i - 1] > '9' && str[i - 1] < 'A') ||
					(str[i - 1] > 'Z' && str[i - 1] < 'a') ||
					str[i - 1] > 'z'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

#include <stdio.h>
int main()
{
	char str[]= "ssdilgd slsdkgk SEGHFDR SFGHdfh dfhdDSGDFH 1232dfg hnkjfg+fdhDFdh +hnkjfg+fdhDFd";
	
    
	printf("%s",ft_strcapitalize(str));
	
}
