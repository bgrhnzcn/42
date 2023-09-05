/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab_main.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrhnzcn <bgrhnzcn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 01:12:42 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/06 01:27:08 by bgrhnzcn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_sort_int_tab.c"

void	ft_sort_int_tab(int *a, int size);


int main(void)
{
    int size = 15;
    int arr[size];
    int values;

    values = 18;
    for (int i = 0; i < size; i++)
    {
        arr[i] = values;
        values--;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    
    ft_sort_int_tab(arr, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    } 
}