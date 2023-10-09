/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:37:19 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/22 20:11:49 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_split.h"
#include <stdlib.h>

int	main(void)
{
	char	str[] = "asd";
	char	charset[] = "";
	char	**strs = ft_split(str, charset);
	int i = 0;
	while (strs[i])
	{
		printf("%s\n", strs[i]);
		i++;
	}
}