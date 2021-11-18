/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printDecimalBase.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:25:10 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/18 18:42:12 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

static	int	printNum(unsigned int unb, int fd)
{
	int		printed_num;

	if (unb / 10 == 0)
	{
		ft_putchar_fd('0' + unb, fd);
		return (printed_num += 1);
	}
	printNum(unb / 10, fd);
	ft_putchar_fd('0' + unb % 10, fd);
	return (printed_num += 1);
}

int		printDecimalBase(int n, int fd)
{
	unsigned int 	unb;
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
	return (printNum(unb,fd) + sign_len);
}

int		printUnsignedDecimal(unsigned int n, int fd)
{
	return (printNum(n ,fd));
}
