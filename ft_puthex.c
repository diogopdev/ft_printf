/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerrei <jguerrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:57:53 by jguerrei          #+#    #+#             */
/*   Updated: 2022/03/21 22:22:10 by jguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int nb, char *base)
{
	int	i;

	i = 0;
	if (nb > 15)
	{
		i += ft_puthex((nb / 16), base);
		i += ft_puthex((nb % 16), base);
	}
	else
		i += ft_putchar(base[nb]);
	return (i);
}
