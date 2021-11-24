/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printDecimalBase.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:25:10 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/25 04:03:31 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <printHexBase.h>

static	int	printNum(unsigned int unb, int fd)
{
	int	printed_num;

	printed_num = 0;
	if (unb / 10 == 0)
	{
		ft_putchar_fd('0' + unb, fd);
		printed_num += 1;
		return (printed_num);
	}
	printed_num = printNum(unb / 10, fd);
	ft_putchar_fd('0' + unb % 10, fd);
	printed_num += 1;
	return (printed_num);
}

int	printDecimalBase(int n, int fd)
{
	unsigned int	unb;
	char			sign_len;

	sign_len = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		sign_len += 1;
		unb = -1 * n;
	}
	else
	{
		unb = n;
	}
	return (printNum(unb, fd) + sign_len);
}

int	printUnsignedDecimal(unsigned int n, int fd)
{
	return (printNum(n, fd));
}
