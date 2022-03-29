/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_return.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerrei <jguerrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 19:05:22 by jguerrei          #+#    #+#             */
/*   Updated: 2022/03/21 22:21:13 by jguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_return(int nb)
{
	static int	cont;

	if (nb == 0)
		cont++;
	if (nb == 1)
		cont = 0;
	if (nb == -1)
		cont -= 1;
	if (nb != 0 && nb != 1 && nb != -1)
		cont += nb;
	return (cont);
}
