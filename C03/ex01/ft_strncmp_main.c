/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 18:21:58 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/11 20:07:55 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strncmp.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "dememe metasd";
    char str2[] = "dem2me metini";
    int x = ft_strncmp(str1, str2, 10);
    int y = strncmp(str1, str2, 10);
    printf("%d\n", x);
    printf("%d\n", y);
}