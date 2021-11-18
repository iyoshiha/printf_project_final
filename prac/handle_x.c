/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:06:23 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/18 19:47:52 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../component/component.h"
#include "../tmp.h"

void	handle_x(t_formatData* data)
{
	unsigned int	ui;

	ui = va_arg(data->ap, unsigned int);
	_PF_LEN_PRINTED += print_unsigned_int_hex(ui, _PHEX_CAPITAL);
	return ;
}

int		print_unsigned_int_hex(unsigned int decimal)
{
	int		printed_num;

	printed_num = printHexBase(decimal);
	return (printed_num);
}
