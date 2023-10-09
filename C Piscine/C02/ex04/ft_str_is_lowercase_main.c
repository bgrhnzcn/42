/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase_main.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:49:28 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/07 17:50:39 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_is_lowercase.c"
#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int main()
{
    char str[] = "me123t neme.";
    char str1[] = "metin";
    char str2[] = "";

    printf("%d\n" ,ft_str_is_lowercase(str));
    printf("%d\n" ,ft_str_is_lowercase(str1));
    printf("%d\n" ,ft_str_is_lowercase(str2));
}