/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanjaimi <aanjaimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 12:50:20 by aanjaimi          #+#    #+#             */
/*   Updated: 2021/12/06 14:13:46 by aanjaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printfint(int i)
{
	char	*s;
	int		k;

	s = ft_itoa(i);
	k = ft_strlen(s);
	ft_putstr_fd(s, 1);
	free(s);
	return (k);
}
