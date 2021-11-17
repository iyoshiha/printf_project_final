/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printAddress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:08:08 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/18 04:02:33 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tmp.h"
# include "component.h"


// print number by hexadeciam base
// return the total number of printed charactors.
int		printAddress(void* ptr)
{
	int total_num_printed;

	if (ptr == 0)
		return(print0());
	ft_putstr_fd("0x", STDOUT_FILENO);
	total_num_printed =	LENGTH_OF_0X;
	total_num_printed += printHexBase((long long unsigned int)ptr);
	return (total_num_printed);
}

int		printHexBase(long long unsigned int decimal)
{
	long long unsigned int	next_digit;
	int remainder;
	static int printed_num;

	if (decimal == 0)
		return(print0());
	if ((next_digit = (decimal / 16)) > 0)
		printHexBase(next_digit);
	remainder = decimal % 16;
	if (remainder >= 10)
		remainder = replace_ten2a(remainder);
	else
		remainder += '0';
	ft_putchar_fd (remainder, STDOUT_FILENO);
	printed_num++;
	return(printed_num);
}

int		replace_ten2a(int num)
{
	int base;

	base = 'a' - 10;
	return (base + num);
}

int		print0(void)
{
	int		printed_num;
	ft_putchar_fd('0', STDOUT_FILENO);
	return (printed_num = 1);
}
