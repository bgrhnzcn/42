/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power_main.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 00:53:58 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/18 12:59:13 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_recursive_power.h"

int main(void)
{
    int x = ft_recursive_power(2, 3);
    printf("%d\n", x);
    x = ft_recursive_power(-2, 1);
    printf("%d\n", x);
    x = ft_recursive_power(2, -2);
    printf("%d\n", x);
    x = ft_recursive_power(0, 0);
    printf("%d\n", x);
    x = ft_recursive_power(0, 3);
    printf("%d\n", x);
    x = ft_recursive_power(3, 0);
    printf("%d\n", x);
}