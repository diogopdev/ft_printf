/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerrei <jguerrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:10:37 by jguerrei          #+#    #+#             */
/*   Updated: 2022/03/22 12:11:03 by jguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str)
{
	char	x;
	int		cont;

	cont = 0;
	x = '0';
	if (str == NULL)
	{
		write(1, "(null)", 6);
		ft_count_return(6);
		return ;
	}
	while (str[cont] != '\0')
	{
		x = str[cont];
		write(1, &x, 1);
		ft_count_return(0);
		cont++;
	}
}
