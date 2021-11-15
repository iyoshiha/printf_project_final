/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printHexBase copy.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:08:08 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/16 05:06:27 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tmp.h"

// print number by hexadeciam base
// return the total number of printed charactors.
int		printAddress(void* ptr)
{
	int total_num_printed;

	ft_putstr_fd("0x", STDOUT_FILENO);
	total_num_printed = ft_strlen("0x");
	total_num_printed = printHexBase((long long int)ptr);
	return (total_num_printed);
}

int		printHexBase(long long int decimal)
{
	int	next_digit;
	int remainder;
	static int count;

	// handle deciaml =< 0;
	if (next_digit = decimal / 16 > 0)
		printHexBase(next_digit);
	ft_putchar_fd (remainder = decimal % 16, STDOUT_FILENO);
	return(count++);



}
