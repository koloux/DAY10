/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 16:24:52 by nhuber            #+#    #+#             */
/*   Updated: 2015/11/05 21:18:16 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *integer;

	i = 0;
	if (!(integer = (int *)malloc(sizeof(int) * length)))
		return (NULL);
	while (i < length)
	{
		integer[i] = f(tab[i]);
		i++;
	}
	return (integer);
}
