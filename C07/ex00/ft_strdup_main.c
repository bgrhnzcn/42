/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:32:45 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/13 18:44:15 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strdup.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char str[] = "deneme metini.";
	char *p = ft_strdup(str);

	printf("%s\n", p);
	free(p);
	return (0);
}