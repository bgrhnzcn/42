/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrhnzcn <bgrhnzcn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 18:21:58 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/09 18:29:42 by bgrhnzcn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strncmp.h"
#include <stdio.h>

int main()
{
    char str1[] = "denemp metini";
    char str2[] = "dememe metini";
    int x = ft_strncmp(str1, str2, 3);
    printf("%d\n", x);
}