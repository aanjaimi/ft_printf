/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanjaimi <aanjaimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 14:52:43 by aanjaimi          #+#    #+#             */
/*   Updated: 2021/12/07 14:43:09 by aanjaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int			k;
	va_list		ap;

	va_start(ap, format);
	k = ft_prtfrm((char *)format, ap);
	va_end(ap);
	return (k);
}

int	ft_prtfrm(char *format, va_list ap)
{
	int	i;
	int	j;

	j = 0;
	while (*format)
	{
		i = ft_prtper(*format, *(format + 1), ap);
		if (i == -1)
			return (j);
		j += i;
		if (*format == '%')
			format++;
		format++;
	}
	return (j);
}

int	ft_prtper(char a, char b, va_list ptr)
{
	int	k;

	k = 0;
	if (a == '%' && b == '%')
		k += ft_printfchar('%');
	else if (a == '%' && b == 'c')
		k += ft_printfchar(va_arg(ptr, int));
	else if (a == '%' && b == 'p')
		ft_printptr(va_arg(ptr, unsigned long), &k);
	else if (a == '%' && b == 's')
		k += ft_printfstr(va_arg(ptr, char *));
	else if (a == '%' && (b == 'i' || b == 'd'))
			k += ft_printfint(va_arg(ptr, int));
	else if (a == '%' && b == 'u')
		k += ft_printunint(va_arg(ptr, unsigned int));
	else if (a == '%' && b == 'x')
		ft_printhexa(va_arg(ptr, unsigned int), "0123456789abcdef", &k);
	else if (a == '%' && b == 'X')
		ft_printhexa(va_arg(ptr, unsigned int), "0123456789ABCDEF", &k);
	else if (a != '%')
		k += ft_printfchar(a);
	else
		return (-1);
	return (k);
}
