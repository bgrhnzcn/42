/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrhnzcn <bgrhnzcn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 19:48:29 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/09 20:38:14 by bgrhnzcn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strstr.h"

int main()
{
    char str[] = "deneme metini.";
    char to_find[] = "me met";
    char *result = ft_strstr(str, to_find);
    printf("%s\n", result);
}