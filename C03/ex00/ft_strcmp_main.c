/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrhnzcn <bgrhnzcn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 17:26:36 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/09 17:59:24 by bgrhnzcn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strcmp.h"

int	main(void)
{
	char str1[] = "deneme metini";
	char str2[] = "deneme";
	int x = ft_strcmp(str1, str2);
	printf("%d\n", x);
}