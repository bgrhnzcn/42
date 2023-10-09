/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:06:47 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/07 18:40:18 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_lower(char c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	return (0);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_char_is_lower(str[i]))
			str[i] -= 32;
		i++;
	}
	return (str);
}
