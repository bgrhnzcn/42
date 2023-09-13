/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:39:31 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/13 16:16:49 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_numeric(char c)
{
	if (c <= '9' && c >= '0')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i])
	{
		if (str[i] == '-')
			sign *= -1;
		while (ft_is_numeric(str[i]))
		{
			result += str[i] - 48;
			if (!ft_is_numeric(str[i + 1]))
				return (result * sign);
			result *= 10;
			i++;
		}
		i++;
	}
	return (result * sign);
}
