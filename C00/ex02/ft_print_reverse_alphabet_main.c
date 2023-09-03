/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet_main.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:08:11 by buozcan           #+#    #+#             */
/*   Updated: 2023/08/31 19:18:07 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;

	c = 'z';
	while (c >= 97)
	{
		write (1, &c, 1);
		c--;
	}
}

int	main(void)
{
	ft_print_alphabet();
}
