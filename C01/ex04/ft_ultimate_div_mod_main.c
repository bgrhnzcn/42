/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod_main.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 21:01:11 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/04 21:03:11 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ultimate_div_mod.c"
#include <stdio.h>

int main(void)
{
    int a;
    int b;

    a = 10;
    b = 3;
    ft_ultimate_div_mod(&a, &b);
    printf("Div: %d", a);
    printf("Mod: %d", b);
}