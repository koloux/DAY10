/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myheader.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 10:16:21 by nhuber            #+#    #+#             */
/*   Updated: 2015/11/04 18:14:26 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYHEADER_H
# define MYHEADER_H
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(long int nb);
void	ft_putstr(char *str);
int		ft_choice(char **av);
int		ft_add(int a, int b);
int		ft_minus(int a, int b);
int		ft_mul(int a, int b);
int		ft_div(int a, int b);
int		ft_modul(int a, int b);
int		ft_atoi(char *str);

#endif
