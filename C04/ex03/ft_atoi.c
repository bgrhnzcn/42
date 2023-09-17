/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrhnzcn <bgrhnzcn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:39:31 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/17 17:26:37 by bgrhnzcn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_check_num(int sign, char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i])
	{
		result += str[i] - 48;
		if (!(str[i + 1] <= '9' && str[i + 1] >= '0'))
			break ;
		result *= 10;
		i++;
	}
	return (result * sign);
}

int	ft_atoi(char *str)
{
	int	sign;

	sign = 1;
	while (*str)
	{
		if (*str == '-')
			sign *= -1;
		else if (!(ft_is_ignored(*str) || (*str <= '9' && *str >= '0')))
			return (0);
		if (*str <= '9' && *str >= '0')
			return (ft_check_num(sign, str));
		str++;
	}
	return (0);
}
