/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerrei <jguerrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:43:46 by jguerrei          #+#    #+#             */
/*   Updated: 2022/03/21 22:22:52 by jguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include "ft_printf.h"

void	ft_return(char *base, int n[50], long unsigned nbr)
{
	int	cont;

	cont = 0;
	if (nbr == 0)
	{
		write(1, "0", 1);
		ft_count_return(0);
	}
	while (nbr != 0)
	{
		nbr = nbr / ft_strlen(base);
		cont++;
	}
	cont -= 1;
	while (cont >= 0)
	{
		write(1, &base[n[cont]], 1);
		ft_count_return(0);
		cont--;
	}
}

void	ft_putnbr_base(long unsigned nbr, char *base)
{
	int				cont;
	int				new_nbr[50];
	long unsigned	temp;

	cont = 0;
	temp = nbr;
	while (cont < 50)
		new_nbr[cont++] = -1;
	cont = 0;
	while (nbr > 0)
	{
		new_nbr[cont] = nbr % ft_strlen(base);
		nbr /= ft_strlen(base);
		cont++;
	}
	ft_return(base, new_nbr, temp);
}
