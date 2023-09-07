/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha_main.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:24:59 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/07 16:45:37 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_is_alpha.c"
#include <stdio.h>

int	ft_str_is_alpha(char *str);

int main()
{
    char str[] = "met neme.";
    char str1[] = "metin";
    char str2[] = "";

    printf("%d\n" ,ft_str_is_alpha(str));
    printf("%d\n" ,ft_str_is_alpha(str1));
    printf("%d\n" ,ft_str_is_alpha(str2));
}