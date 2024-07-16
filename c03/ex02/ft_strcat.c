/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fturedi <fturedi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:24:40 by fturedi           #+#    #+#             */
/*   Updated: 2024/02/13 22:17:50 by fturedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>

int main()
{
	char *t;

	char a[20] = "Furkan";
	char b[20] = "Turedi";
	
	printf("%s\n", a);
	t = ft_strcat(a, b);
	printf("%s\n", a);
	return (0);
}