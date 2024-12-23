/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:54:04 by jocroon           #+#    #+#             */
/*   Updated: 2024/12/20 14:52:07 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

/*main function*/
int		ft_printf(const char *format, ...);

/*library function*/
char	*ft_itoa(int nbr);
char	*ft_utoa(unsigned int nbr);
int		ft_putchar(char c);
int		ft_putstr(const char *str);
size_t	ft_strlen(const char *str);
int		ft_int_len(int nbr);
int		ft_unsigned_int_len(unsigned int nbr);
char	*ft_strchr(const char *str, int c);

/*srcs functions*/
int		check_format(char c, va_list args);
int		print_char(int c);
int		print_string(const char *str);
int		print_pointer(void *ptr);
int		print_decimal(int nbr);
int		print_unsigned(unsigned int nbr);
int		print_hex_lower(unsigned long nbr);
int		print_hex_upper(unsigned long nbr);
int		print_percent(void);

#endif
