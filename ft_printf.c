/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerrei <jguerrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:41:18 by jguerrei          #+#    #+#             */
/*   Updated: 2022/03/29 13:17:47 by jguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		cont;
	int		ret;

	cont = 0;
	va_start(ap, str);
	while (str[cont] != '\0')
	{
		if (str[cont] == '%')
		{
			ft_after_percentage(ap, str[cont + 1]);
			cont += 2;
			continue ;
		}
		write(1, &str[cont], 1);
		ft_count_return(0);
		cont++;
	}
	va_end(ap);
	ret = ft_count_return(0) - 1;
	ft_count_return(1);
	return (ret);
}

void	ft_after_percentage(va_list ap, char c)
{
	if (c == 'c')
		ft_putchar(va_arg(ap, int));
	else if (c == 's')
		ft_putstr(va_arg(ap, char *));
	else if (c == 'p')
		ft_percentage_p(va_arg(ap, long unsigned));
	else if (c == 'd')
		ft_putnbr(va_arg(ap, int));
	else if (c == 'i')
		ft_putnbr(va_arg(ap, int));
	else if (c == 'u')
		ft_uns_putnbr(va_arg(ap, unsigned int));
	else if (c == 'x')
		ft_puthex(va_arg(ap, int), "0123456789abcdef");
	else if (c == 'X')
		ft_puthex(va_arg(ap, int), "0123456789ABCDEF");
	else if (c == '%')
		ft_putchar('%');
}

// int main()
// {
// 	ft_printf("test %s %s\n", "test2", "test3");
// 	printf("test %s %s\n", "test2", "test3");
// 	return (0);
// }
