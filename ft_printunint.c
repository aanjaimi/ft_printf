/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanjaimi <aanjaimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 22:38:00 by aanjaimi          #+#    #+#             */
/*   Updated: 2021/12/06 14:16:24 by aanjaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunint(unsigned int n)
{
	int				len;
	int				k;
	unsigned int	l;
	int				m;

	l = n;
	len = 0;
	if (l == 0 && len == 0)
		len++;
	while (l > 0 && len == 0)
	{
		l = l / 10;
		len++;
	}
	if (n >= 0 && n <= 9)
	{
		ft_putchar_fd(n + '0', 1);
		return (len);
	}
	k = ft_printunint(n / 10);
	ft_putchar_fd(n % 10 + '0', 1);
	m = len + k;
	return (m);
}
