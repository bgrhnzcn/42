/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrhnzcn <bgrhnzcn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:05:11 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/09 16:28:59 by bgrhnzcn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ft_strncpy.h"

int main()
{
    char src[] = "deneme metini 2";
    char dest[11];
    char dest2[50];
    char dest3[16];

    ft_strncpy(dest, src, 10);
    ft_strncpy(dest2, src , 50);
    ft_strncpy(dest3, src , 16);

    for(int i = 0; i < 11; i++)
    {
        printf("%d", dest[i]);
    }
    for(int i = 0; i < 50; i++)
    {
        printf("%d", dest2[i]);
    }
    for(int i = 0; i < 16; i++)
    {
        printf("%d", dest3[i]);
    }
    //printf("%s\n", dest);
}
