/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 21:10:21 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/04 21:39:45 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putstr.c"

void	ft_putstr(char *str);

int main(void)
{
	char str[] = "metin.";

	ft_putstr(str);
}