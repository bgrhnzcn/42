/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:05:11 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/06 18:32:52 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ft_strncpy.c"

char    *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
    char src[] = "deneme metini 2";
    char dest[11];

    ft_strncpy(dest, src, 10);

    for(int i = 0; i < 11; i++)
    {
        printf("%d", dest[i]);
    }
    //printf("%s\n", dest);
}
