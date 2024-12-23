/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:00:20 by jocroon           #+#    #+#             */
/*   Updated: 2024/12/20 14:50:41 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/*to check the format*/
int	check_format(char c, va_list args)
{
	if (c == 'c')
		return (print_char(va_arg(args, int)));
	else if (c == 's')
		return (print_string(va_arg(args, const char *)));
	else if (c == 'p')
		return (print_pointer(va_arg(args, void *)));
	else if (c == 'd' || c == 'i')
		return (print_decimal(va_arg(args, int)));
	else if (c == 'u')
		return (print_unsigned(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (print_hex_lower(va_arg(args, unsigned int)));
	else if (c == 'X')
		return (print_hex_upper(va_arg(args, unsigned int)));
	else if (c == '%')
		return (print_percent());
	return (0);
}
