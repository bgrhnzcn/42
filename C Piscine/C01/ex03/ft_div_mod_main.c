/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 20:53:28 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/07 17:32:05 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_div_mod.c"
#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int div;
    int mod;

    a = 10;
    b = 0;
    ft_div_mod(a, b, &div, &mod);
    printf("Div: %d\n", div);
    printf("Mod: %d\n", mod);
}