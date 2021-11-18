/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printDecimalBase.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:25:10 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/18 14:55:42 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static	int	output_num(unsigned int unb, int fd)
{
	unsigned int	prited_num;

	if (unb / 10 == 0)
	{
		ft_putchar_fd('0' + unb, fd);
		return ;
	}
	output_num(unb / 10, fd);
	ft_putchar_fd('0' + unb % 10, fd);

	return (printed_num);
}

int		printDecimalBase(int n, int fd)
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
	output_num(unb, fd);
}
