/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanjaimi <aanjaimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 20:30:05 by aanjaimi          #+#    #+#             */
/*   Updated: 2021/12/06 14:15:01 by aanjaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printhexa(unsigned long int p, char *base, int *ret)
{
	if (p >= 16 && p >= 0)
	{
		ft_printhexa(p / 16, base, ret);
		ft_printhexa(p % 16, base, ret);
	}
	else
	{
		ft_putchar_fd(base[p], 1);
		(*ret)++;
	}
	return ;
}
