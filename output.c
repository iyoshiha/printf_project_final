/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 04:22:12 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/14 05:05:44 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tmp.h"

int	outputAndCount(const char* format,int* printed_len, va_list ap)
{
	char examed_chr;

	while (NOTEOA(examed_chr = *format))
	{
		if (examed_chr == '%')
		{
			conv();
			count_conv();
		}
		else
		{
			ft_putchar_fd(examed_chr, STDOUT_FILENO);
			*printed_len+=1;
		}
		format+=1;
	}
	return (*printed_len);
}
