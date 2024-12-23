/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:10:23 by jocroon           #+#    #+#             */
/*   Updated: 2024/12/20 14:49:27 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
/*to print %s*/
int	print_string(const char *str)
{
	if (!str)
		return (ft_putstr("(null)"));
	return (ft_putstr(str));
}
/*return the string to print
add the len with putstr to add to count*/