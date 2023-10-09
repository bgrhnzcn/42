/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial_main.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 00:15:02 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/14 17:14:40 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_recursive_factorial.c"
#include <stdio.h>

int	main(void)
{
	int	x = ft_recursive_factorial(3);
	printf("%d\n", x);
}