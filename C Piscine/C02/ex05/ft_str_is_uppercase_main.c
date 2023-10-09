/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase_main.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:52:36 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/07 17:55:01 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_is_uppercase.c"
#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int main()
{
    char str[] = "me123t Meme.";
    char str1[] = "METIN";
    char str2[] = "";

    printf("%d\n" ,ft_str_is_uppercase(str));
    printf("%d\n" ,ft_str_is_uppercase(str1));
    printf("%d\n" ,ft_str_is_uppercase(str2));
}