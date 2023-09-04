/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 20:45:20 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/04 20:49:08 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_swap.c"
#include <unistd.h>

void    ft_swap(int *a, int *b);

int main(void)
{
    int a;
    int b;

    a = 77;
    b = 67;
    write(1, &a, 1);
    write(1, &b, 1);
    ft_swap(&a, &b);
    write(1, &a, 1);
    write(1, &b, 1);
}