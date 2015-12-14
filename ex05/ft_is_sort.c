/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 20:19:42 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/15 00:37:59 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int is_sort;

	is_sort = 1;
	i = 0;
	while (i < length - 1 && is_sort == 1)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			is_sort = 0;
		i++;
	}
	if (is_sort == 1)
		return (1);
	is_sort = 1;
	i = 0;
	while (i < length - 1 && is_sort == 1)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			is_sort = 0;
		i++;
	}
	return (is_sort);
}
