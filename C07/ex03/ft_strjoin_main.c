/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:19:32 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/14 19:25:23 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strjoin.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char *sep = "a.a";
	char *src[10] = {"deneme", "metini", "test", "neden"};
	char *str = ft_strjoin(4, src, sep);
	printf("%s\n", str);
	return (0);
}