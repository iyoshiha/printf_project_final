/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printAddress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:08:08 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/25 03:58:36 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <printHexBase.h>

int	printAddress(void	*ptr)
{
	int	total_num_printed;

	if (ptr == 0)
		return (print0 ());
	ft_putstr_fd("0x", STDOUT_FILENO);
	total_num_printed = PHEX_LEN_OF_0X;
	total_num_printed += \
		printHexBase((long long unsigned int)ptr, PHEX_LOWERCASE);
	return (total_num_printed);
}

/*
	return: the total number of printed characters.
	printout pointer type value assigned as argument.
*/
