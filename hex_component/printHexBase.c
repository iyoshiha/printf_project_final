/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printHexBase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 04:03:35 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/24 01:50:00 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
# include "../includes/printHexBase.h"

int		printHexBase(long long unsigned int decimal, char flag)
{
	long long unsigned int	next_digit;
	int remainder;
	int printed_num;

	printed_num = 0;
	if (decimal == 0)
		return(print0());
	if ((next_digit = (decimal / 16)) > 0)
		printed_num += printHexBase(next_digit, flag);
	remainder = decimal % 16;
	if (remainder >= 10)
		if (flag == 1)
			remainder = replace_ten2a_capital(remainder);
		else
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

int		replace_ten2a_capital(int num)
{
	int base;

	base = 'A' - 10;
	return (base + num);
}
int		print0(void)
{
	int		printed_num;
	ft_putchar_fd('0', STDOUT_FILENO);
	return (printed_num = 1);
}
/*
	return: int type ; the total number of printed charactors.
	printout pointer type value assigned as argument.
*/
