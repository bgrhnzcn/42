/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative_main.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:24:35 by buozcan           #+#    #+#             */
/*   Updated: 2023/08/31 19:44:31 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	p;
	char	c;

	p = 'P';
	c = 'N';
	if (n < 0)
	{
		write(1, &c, 1);
	}
	else
	{
		write(1, &p, 1);
	}
}

int	main(void)
{
	ft_is_negative(5);
	ft_is_negative(0);
	ft_is_negative(-1);
}
