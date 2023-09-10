/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 17:26:36 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/10 21:32:49 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strcmp.h"

int	main(void)
{
	char str1[] = "deneme metini";
	char str2[] = "deneme metini";
	int x = ft_strcmp(str1, str2);
	int y = strcmp(str1, str2);
	printf("%d\n", x);
	printf("%d\n", y);
}