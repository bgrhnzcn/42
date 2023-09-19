/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:17:52 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/19 20:24:38 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN
#define FT_BOOLEAN

#include <unistd.h>

#define TRUE 1
#define FALSE 0
#define EVEN(a) !(a % 2)
#define EVEN_MSG "I have an even number of arguements.\n"
#define ODD_MSG "I have an odd number of arguments.\n"
#define SUCCESS 0

typedef int	t_bool;
#endif