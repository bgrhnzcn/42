/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrhnzcn <bgrhnzcn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:38:36 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/17 19:40:11 by bgrhnzcn         ###   ########.fr       */
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

int	ft_digit(char *str, char *base)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_search_char(str[i], base))
			break ;
		i++;
	}
	return (i);
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

int	ft_check_num_base(char *str, char *base, int base_value)
{
	int	result;
	int	value;
	int	digit;
	int	size;
	int	power;

	result = 0;
	size = ft_digit(str, base);
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
		result += value * (str[size - digit - 1] - 48);
		digit++;
	}
	return (result);
}

int	ft_atoi_base(char *str,char *base)
{
	int	sign;
	int	base_value;

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
			return (sign * ft_check_num_base(str, base, base_value));
		str++;
	}
	return (0);
}
