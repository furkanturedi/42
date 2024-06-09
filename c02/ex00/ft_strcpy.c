/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fturedi <fturedi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:29:20 by fturedi           #+#    #+#             */
/*   Updated: 2024/02/11 18:23:44 by fturedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
int main()
{
	char dest[] = "furkannnnnnnnn";
	char src[] = "turediiii";

	printf("%s\n", dest);
	ft_strcpy(dest,src);
	printf("%s", dest);
	
}