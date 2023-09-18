/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:51:51 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/18 12:56:02 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
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

	i = 0;
	while (base[i])
		i++;
	if (i < 2)
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

int	ft_str_base(int nbr, char *result, char *base)
{
	int	base_size;
	int	i;

	i = 0;
	while (base[i])
		i++;
	base_size = i;
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
	int		digit;
	char	ascii;
	int		new_digit;

	if (!ft_is_base_correct(base))
		return ;
	//write error handling for INT_MİN
	//write error handling for 0
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	digit = ft_digit(nbr);
	new_digit = ft_str_base(nbr, result, base);
	while (new_digit--)
	{
		ascii = base[(unsigned char)result[32 - new_digit - 1]];
		write(1, &ascii, 1);
	}
}
int	ft_search_char(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_is_ignored(char c)
{
	if (c <= 13 && c >= 9)
		return (1);
	if (c == 32)
		return (1);
	if (c == '+')
		return (1);
	return (0);
}

int	ft_ascii_to_int(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (0);
}

int	ft_check_num_base(char *str, char *base, int base_value, int size)
{
	int	result;
	int	value;
	int	digit;
	int	power;

	result = 0;
	digit = 0;
	while (digit != size)
	{
		value = 1;
		power = digit;
		while (power)
		{
			value *= base_value;
			power--;
		}
		result += value * ft_ascii_to_int(str[size - digit - 1], base);
		digit++;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	base_value;
	int	size;

	base_value = 0;
	while (base[base_value] != 0)
		base_value++;
	sign = 1;
	while (*str)
	{
		if (*str == '-')
			sign *= -1;
		else if (!(ft_is_ignored(*str) || ft_search_char(*str, base)))
			return (0);
		if (ft_search_char(*str, base))
		{
			size = 0;
			while (str[size++])
				if (!ft_search_char(str[size], base))
					break ;
			return (sign * ft_check_num_base(str, base, base_value, size));
		}
		str++;
	}
	return (0);
}

//char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
//{
//	return (base_from + base_to + nbr);
//}