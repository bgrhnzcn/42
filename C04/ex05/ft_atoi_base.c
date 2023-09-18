/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:38:36 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/18 09:29:12 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
