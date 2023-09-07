/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric_main.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:44:22 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/07 17:46:36 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_is_numeric.c"
#include <stdio.h>

int	ft_str_is_numeric(char *str);

int main()
{
    char str[] = "me123t neme.";
    char str1[] = "4523";
    char str2[] = "";

    printf("%d\n" ,ft_str_is_numeric(str));
    printf("%d\n" ,ft_str_is_numeric(str1));
    printf("%d\n" ,ft_str_is_numeric(str2));
}