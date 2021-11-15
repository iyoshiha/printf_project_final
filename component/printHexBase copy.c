/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printHexBase copy.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:08:08 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/16 05:40:32 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tmp.h"

// print number by hexadeciam base
// return the total number of printed charactors.
int		printAddress(void* ptr)
{
	int total_num_printed;

	if (ptr == 0)
		return(print0());
	ft_putstr_fd("0x", STDOUT_FILENO);
	total_num_printed = ft_strlen("0x");
	total_num_printed = printHexBase((long long int)ptr);
	return (total_num_printed);
}

int		printHexBase(long long unsgined int decimal)
{
	int	next_digit;
	int remainder;
	static int count;

	if (decimal == 0)	// handle deciaml =< 0;
	{
		return(print0());
	}
	if (next_digit = decimal / 16 > 0)
		printHexBase(next_digit);
	remainder = decimal % 16;
	if (remainder => 10)
		replace_a2f(remainder);
	else
		remainder += '0'
	ft_putchar_fd (remainder, STDOUT_FILENO);
	return(count++);
}

int		replace_a2f(num)
{
	int base;

	base = 'a' - 10;
	return (base + num);
}

int		print0(void)
{
	int		printed_num;
	ft_putchar_fd("0", STDOUT_FILENO);
	return (printed_num = 1);
}
