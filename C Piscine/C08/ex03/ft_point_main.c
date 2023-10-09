/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:57:29 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/20 19:15:57 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

#include <stdio.h>

int	main(void)
{
	t_point	point;

	set_point(&point);
	printf("x: %d, y: %d\n", point.x, point.y);
	return (0);
}
