/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:10:14 by jocroon           #+#    #+#             */
/*   Updated: 2024/12/20 14:49:50 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
/*to print %X*/
int	print_hex_upper(unsigned long nbr)
{
	char	*str;
	int		len;

	str = "0123456789ABCDEF";
	len = 0;
	if (nbr == 0)
	{
		ft_putchar('0');
		return (1);
	}
	if (nbr >= 16)
		len += print_hex_upper(nbr / 16);
	ft_putchar(str[nbr % 16]);
	len++;
	return (len);
}
/*return hexadecimal address of nbr in uppercase
and the len to add to count*/

/* #include <stdio.h>

int main()
{
    unsigned int nbr1 = 123456;
    unsigned int nbr2 = 0;
    unsigned int nbr3 = 255;

    int len1 = print_hex_upper(nbr1); // affiche "1e240"
    printf("\nLength: %d\n", len1);    // affiche la len

    int len2 = print_hex_upper(nbr2); // affiche "0"
    printf("\nLength: %d\n", len2);    // affiche la len

    int len3 = print_hex_upper(nbr3); // affiche "ff"
    printf("\nLength: %d\n", len3);    // affiche la len

    return 0;
} */