/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrhnzcn <bgrhnzcn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 18:21:58 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/12 19:34:09 by bgrhnzcn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strncmp.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "asd\200";
    char str2[] = "asd";
    int x = ft_strncmp(str1, str2, 4);
    int y = strncmp(str1, str2, 4);
    printf("%d\n", x);
    printf("%d\n", y);
}