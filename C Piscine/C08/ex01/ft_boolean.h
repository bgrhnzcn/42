/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:17:52 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/21 20:45:52 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H

# define FT_BOOLEAN_H

# include <unistd.h>

# define TRUE 1

# define FALSE 0

# define EVEN(a) (a % 2 == 0)

# define EVEN_MSG "I have an even number of arguments.\n"

# define ODD_MSG "I have an odd number of arguments.\n"

# define SUCCESS 0

typedef int	t_bool;
#endif