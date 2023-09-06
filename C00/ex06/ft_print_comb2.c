/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 23:38:59 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/04 20:04:33 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
		ft_putchar(48 + nb);
	}
	else
		ft_putchar(48 + nb);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = -1;
	while (++a < 99)
	{
		b = a;
		while (++b < 100)
		{
			if (a / 10 == 0)
				ft_putchar('0');
			ft_putnbr(a);
			ft_putchar(' ');
			if (b / 10 == 0)
				ft_putchar('0');
			ft_putnbr(b);
			if (!(a == 98 && b == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
