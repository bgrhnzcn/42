/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 01:26:35 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/04 22:05:15 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_ended(int *digits, int max_lenght)
{
	int	i;

	i = 0;
	if (*digits != 9)
		return (0);
	while (i < max_lenght - 1)
	{
		if (*(digits + i) - *(digits + i + 1) != 1)
			return (0);
		i++;
	}
	return (1);
}

void	ft_helper_combn(int n, int *digits, int max_lenght)
{
	int	a;

	if (n == 0)
	{
		while (n < max_lenght)
		{
			ft_putchar(48 + *(digits + max_lenght - n - 1));
			n++;
		}
		if (is_ended(digits, max_lenght) == 1)
			return ;
		ft_putchar(',');
		ft_putchar(' ');
		return ;
	}
	if (n == max_lenght)
		a = 0;
	else
		a = *(digits + n) + 1;
	while (a <= (10 - n))
	{
		*(digits + (n - 1)) = a;
		ft_helper_combn(n - 1, digits, max_lenght);
		a++;
	}
}

void	ft_print_combn(int n)
{
	int	digits[10];

	if (!(n > 0 && n < 10))
		return ;
	ft_helper_combn(n, digits, n);
}

int main(void)
{
	ft_print_combn(5);
}