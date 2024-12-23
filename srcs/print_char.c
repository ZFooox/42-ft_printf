/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:09:33 by jocroon           #+#    #+#             */
/*   Updated: 2024/12/20 14:50:34 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
/*to print %c*/
int	print_char(int c)
{
	return (ft_putchar(c));
}
/*return the char and 1 to add to count*/