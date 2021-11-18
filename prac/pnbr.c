/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pnbr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 00:02:31 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/18 17:11:58 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

static int	output_num(unsigned int unb, int fd)
{
	static int	printed_num;

	if (unb / 10 == 0)
	{
		ft_putchar_fd('0' + unb, fd);
		printed_num += 1;
		return (printed_num);
	}
	output_num(unb / 10, fd);
	ft_putchar_fd('0' + unb % 10, fd);
	printed_num += 1;
	return (printed_num);
}

int		ft_putnbr_fd_i(int n, int fd)
{
	unsigned int unb;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		unb = -1 * n;
	}
	else
	{
		unb = n;
	}
	return (output_num(unb, fd));
}
