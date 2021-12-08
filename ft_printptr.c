/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanjaimi <aanjaimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 20:33:19 by aanjaimi          #+#    #+#             */
/*   Updated: 2021/12/06 14:15:14 by aanjaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printptr(unsigned long p, int *ret)
{
	(*ret) += 2;
	ft_putstr_fd("0x", 1);
	ft_printhexa(p, "0123456789abcdef", ret);
}
