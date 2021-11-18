/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_low_x.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:59:54 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/18 19:47:38 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../component/component.h"
#include "../tmp.h"

void	handle_lower_x(t_formatData* data)
{
	unsigned int	ui;

	ui = va_arg(data->ap, unsigned int);
	_PF_LEN_PRINTED += printHexBase(ui, _PHEX_LOWERCASE);
	return ;
}

/*
int		print_unsigned_int_hex(unsigned int decimal)
{
	int		printed_num;

	printed_num = printHexBase(decimal, _PHEX_LOWERCASE);
	return (printed_num);
}
*/
