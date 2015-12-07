/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 09:39:52 by nhuber            #+#    #+#             */
/*   Updated: 2015/11/04 21:08:17 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myheader.h"

int		ft_add(int a, int b)
{
	long int result;

	result = a + b;
	if (result < -2147483648 || result > 2147483647)
		return (0);
	return (a + b);
}

int		ft_minus(int a, int b)
{
	long int result;

	result = a - b;
	if (result < -2147483648 || result > 2147483647)
		return (0);
	return (a - b);
}

int		ft_mul(int a, int b)
{
	long int result;

	result = a * b;
	if (result < (-2147483648) || result > 2147483647)
		return (0);
	return (a * b);
}

int		ft_div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}

int		ft_modul(int a, int b)
{
	long int result;

	result = a % b;
	if (result < -2147483648 || result > 2147483647)
		return (0);
	return (a % b);
}
