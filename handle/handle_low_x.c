/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_low_x.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:59:54 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/25 03:27:59 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <printHexBase.h>
#include <ft_printf.h>

int	handle_lower_x(t_formatData	*data)
{
	unsigned int	ui;
	int				printed_num;

	ui = va_arg(data->ap, unsigned int);
	printed_num = printHexBase(ui, PHEX_LOWERCASE);
	return (printed_num);
}
