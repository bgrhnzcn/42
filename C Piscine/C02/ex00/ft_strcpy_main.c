/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:53:17 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/11 17:50:31 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strcpy.h"

int main(void)
{
    char str[] = "deneme metini";
    char dest[40] = "test metini";
    char dest2[40] = "test metini";

    char *a = ft_strcpy(dest, str);
    char *b = strcpy(dest2, str);

    printf("%s\n", dest);
    printf("%s\n", a);
    printf("%s\n", b);
}