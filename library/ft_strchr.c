/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 17:15:58 by jocroon           #+#    #+#             */
/*   Updated: 2024/12/20 17:16:01 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
/*search a char in a string for ft_printf.c */
char	*ft_strchr(const char *str, int c)
{
	unsigned int	i;
	char			d;

	i = 0;
	d = (char) c;
	while (str[i])
	{
		if (str[i] == d)
			return ((char *) &str[i]);
		i++;
	}
	if (str[i] == d)
		return ((char *) &str[i]);
	return (NULL);
}
/*allow ft_printf to check the format or to just print*/
