/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 21:49:39 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/04 21:49:39 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	upper_limit;
	int	lower_limit;

	lower_limit = 0;
	upper_limit = size - 1;
	while (upper_limit >= lower_limit)
	{
		ft_swap((tab + lower_limit), tab)
	}
}