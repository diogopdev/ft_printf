/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percentage_p.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerrei <jguerrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:41:23 by jguerrei          #+#    #+#             */
/*   Updated: 2022/03/21 22:21:11 by jguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_percentage_p(long unsigned nbr)
{
	ft_putstr("0x");
	if (nbr == 0)
		ft_putchar('0');
	if (nbr >= 1)
		ft_putnbr_base(nbr, "0123456789abcdef");
}
