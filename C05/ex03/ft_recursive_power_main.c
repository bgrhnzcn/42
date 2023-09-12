/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power_main.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 00:53:58 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/12 00:58:53 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_recursive_power.h"

int main(void)
{
    int x = ft_recursive_power(-4, 2);
    printf("%d\n", x);
}