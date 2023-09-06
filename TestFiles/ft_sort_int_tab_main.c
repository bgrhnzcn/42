/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab_main.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrhnzcn <bgrhnzcn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:53:38 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/06 01:18:23 by bgrhnzcn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_sort_int_tab.c"

void	ft_sort_int_tab(int *a, int size);


int main(void)
{
    int size = 15;
    int arr[size];

    for (int i = size - 1; i >= 0; i--)
    {
        arr[i] = i;
    }
    
    ft_sort_int_tab(arr, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
    
    
}