/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 18:21:58 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/12 06:57:22 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strncmp.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "asd";
    char str2[] = "asd";
    int x = ft_strncmp(str1, str2, 0);
    int y = strncmp(str1, str2, 0);
    printf("%d\n", x);
    printf("%d\n", y);
}