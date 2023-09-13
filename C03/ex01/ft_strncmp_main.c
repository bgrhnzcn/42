/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 18:21:58 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/13 14:47:15 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strncmp.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[4];
    char str2[4];
    int x = ft_strncmp(str1, str2, 1500);
    int y = strncmp(str1, str2, 1500);
    printf("%d\n", x);
    printf("%d\n", y);
}