/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_choice.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 12:54:43 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/11 13:43:10 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myheader.h"

int		ft_choice(char **av)
{
	if (av[2][0] == '+')
		return (0);
	if (av[2][0] == '-')
		return (1);
	if (av[2][0] == '*')
		return (2);
	if (av[2][0] == '/')
		return (3);
	if (av[2][0] == '%')
		return (4);
	return (5);
}
