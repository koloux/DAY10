/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 21:10:18 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/11 14:41:35 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myheader.h"

int		ft_error(char **av)
{
	if (av[3][0] == '0' && av[2][0] == '/')
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (av[3][0] == '0' && av[2][0] == '%')
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	return (1);
}

int		main(int ac, char **av)
{
	int			nbr1;
	int			nbr2;
	int			op;
	long int		result;
	int			(*func_operate[5])(int, int);

	if (ac != 4)
		return (0);
	ft_error(av) == 0 ? return (0) : ;
	func_operate[0] = &ft_add;
	func_operate[1] = &ft_minus;
	func_operate[2] = &ft_mul;
	func_operate[3] = &ft_div;
	func_operate[4] = &ft_modul;
	op = ft_choice(av);
	if (op == 5)
	{
		ft_putchar('0');
		return (0);
	}
	nbr1 = ft_atoi(av[1]);
	nbr2 = ft_atoi(av[3]);
	result = func_operate[op](nbr1, nbr2);
	ft_putnbr(result);
	ft_putchar('\n');
}
