/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanjaimi <aanjaimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 12:46:59 by aanjaimi          #+#    #+#             */
/*   Updated: 2021/12/06 14:14:32 by aanjaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printfstr(char *s)
{
	int	k;

	if (!s)
		s = "(null)";
	k = ft_strlen(s);
	ft_putstr_fd(s, 1);
	return (k);
}
