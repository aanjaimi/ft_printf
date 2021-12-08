/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanjaimi <aanjaimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 19:06:35 by aanjaimi          #+#    #+#             */
/*   Updated: 2021/12/06 14:11:07 by aanjaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>

int		ft_printf(const char *format, ...);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
int		ft_printfchar(char c);
int		ft_printfstr(char *s);
int		ft_printfint(int i);
int		ft_printunint(unsigned int n);
char	*ft_itoa(int n);
size_t	ft_strlen(const char *s);
void	ft_printptr(unsigned long p, int *ret);
void	ft_printhexa(unsigned long int p, char *base, int *ret);
int		ft_prtfrm(char *format, va_list ap);
int		ft_prtper(char a, char b, va_list ap);

#endif
