/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 18:21:58 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/10 21:38:14 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strncmp.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "dememe ";
    char str2[] = "dememe metini";
    int x = ft_strncmp(str1, str2, 10);
    int y = strncmp(str1, str2, 10);
    printf("%d\n", x);
    printf("%d\n", y);
}