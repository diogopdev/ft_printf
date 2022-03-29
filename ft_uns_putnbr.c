/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uns_putnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerrei <jguerrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:50:52 by jguerrei          #+#    #+#             */
/*   Updated: 2022/03/21 22:32:35 by jguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_uns_putnbr(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb < 10)
		i += ft_putchar(nb + '0');
	else
	{
		i += ft_uns_putnbr(nb / 10);
		i += ft_uns_putnbr(nb % 10);
	}
	return (i);
}
