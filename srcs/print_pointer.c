/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:10:20 by jocroon           #+#    #+#             */
/*   Updated: 2024/12/20 15:30:32 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
/*to print %p*/
int	print_pointer(void *ptr)
{
	unsigned long	address;
	int				len;

	address = (unsigned long)ptr;
	len = 0;
	if (!address)
	{
		len = 5;
		write (1, "(nil)", len);
		return (len);
	}
	else
	{
		write (1, "0x", 2);
		len = 2;
		len += print_hex_lower(address);
	}
	return (len);
}
/*return the address of ptr
and the len to add to count*/

/* #include <stdio.h>

int main(void)
{
    int     x = 42;
    int     *ptr = &x;
    char    *str = "Hello";
    void    *null_ptr = NULL;
    int     len;

    // Test avec un pointeur vers un int
    len = print_pointer(ptr);
    printf("\nExpected length: %d\n", len);  // return len

    // Test avec un pointeur vers une chaîne de caractères
    len = print_pointer(str);
    printf("\nExpected length: %d\n", len);

    // Test avec un pointeur NULL
    len = print_pointer(null_ptr);
    printf("\nExpected length: %d\n", len);

    // Test avec un pointeur vers une adresse arbitraire
    len = print_pointer((void *)0x1234abcd);
    printf("\nExpected length: %d\n", len);

    return (0);
} */