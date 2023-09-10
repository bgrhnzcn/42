/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 20:53:00 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/10 19:37:36 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlcat.h"
#include <stdio.h>
#include <strings.h>

int main()
{
    char src[] = "metin srcasdfghj1111";
    char dest[30] = "metin desti";
    char dest2[30] = "metin dest2";

    int x = (int) strlcat(dest, src, 30);
    int y = (int) ft_strlcat(dest2, src, 30);
    printf("%s\n", dest);
    printf("%s\n", dest2);
    printf("%d\n", x);
    printf("%d\n", y);
}