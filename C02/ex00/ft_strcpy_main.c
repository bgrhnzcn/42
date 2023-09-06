/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:53:17 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/06 18:42:24 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ft_strcpy.c"

char    *ft_strcpy(char *dest, char *src);

int main(void)
{
    char str[] = "deneme metini";
    char dest[40];

    char *a = ft_strcpy(dest, str);

    printf("%s\n", dest);
    printf("%s\n", a);
    printf("%d\n", dest[14]);
}