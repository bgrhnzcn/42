/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:42:03 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/07 17:44:20 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_num(char c)
{
	if ((c <= '9' && c >= '0'))
		return (1);
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_char_is_num(str[i]))
			return (0);
		i++;
	}
	return (1);
}
