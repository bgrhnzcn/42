/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize_main.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:17:44 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/11 21:20:54 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcapitalize.h"
#include <stdio.h>

int main()
{
    char str[] = "salut, Comment tu vas ? 42mots quarante-deux; cinquante+et+un";

    ft_strcapitalize(str);

    printf("%s", str);
}