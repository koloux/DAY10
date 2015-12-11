/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 13:03:31 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/11 16:40:31 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] > s2[i])
			return ((s1[i] - '0') - (s2[i] - '0'));
		if (s1[i] < s2[i])
			return ((s1[i] - '0') - (s2[i] - '0'));
		i++;
	}
	return (0);
}

void	ft_sort_wordtab(char **tab)
{
	int	i;
	char	*tmp;

	i = 0;
	while (tab && (tab[i + 1] != '\0'))
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		i++;
	}
}
