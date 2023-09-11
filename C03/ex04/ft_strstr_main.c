/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 19:48:29 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/11 17:43:02 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strstr.h"

int main()
{
    char str[] = "deneme metini.";
    char to_find[] = "me";
    char *result = ft_strstr(str, to_find);
    char *result2 = strstr(str, to_find);
    printf("%s\n", result);
    printf("%s\n", result2);
}