/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:44:56 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/18 12:18:50 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_digit(int nbr)
{
	int	i;

	i = 0;
	while (nbr)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

int	ft_base_size(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	ft_is_base_correct(char *base)
{
	int	i;
	int	j;

	if (ft_base_size(base) < 2)
		return (0);
	i = 0;
	j = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_str_base(int nbr, int digit, char *result, char *base)
{
	int	base_size;
	int	i;

	base_size = ft_base_size(base);
	i = 1;
	while (i <= 32)
	{
		if (nbr == 0)
			break ;
		result[32 - i] = nbr % base_size;
		nbr /= base_size;
		i++;
	}
	return (i - 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	result[32];
	int		i;
	int		digit;
	char	ascii;
	int		new_digit;

	if (!ft_is_base_correct(base))
		return ;
	if (nbr == -2147483648)
	{
		write(1, "-2", 2);
		nbr = 147483648;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	digit = ft_digit(nbr);
	new_digit = ft_str_base(nbr, digit, result, base);
	while (new_digit--)
	{
		ascii = base[result[32 - new_digit - 1]];
		write(1, &ascii, 1);
	}
}
