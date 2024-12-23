/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:58:26 by jocroon           #+#    #+#             */
/*   Updated: 2024/12/20 14:51:23 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
/*print a char*/
int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
/*return a char
not the classic ft_putchar*/