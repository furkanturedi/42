/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fturedi <fturedi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:15:05 by fturedi           #+#    #+#             */
/*   Updated: 2024/02/08 23:26:26 by fturedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_ultimate_div_mod(int *a, int *b)
{
    int div;
    int mod;
    
    div = *a / *b;
    mod = *a % *b;

    *a = div;
    *b = mod;
}

#include <stdio.h>

int main()
{
    int f = 26;
    int z = 12;
     printf("f:%d    z:%d ",f,z);
    ft_ultimate_div_mod(&f, &z);
    printf("f:%d    z:%d ",f,z);
}