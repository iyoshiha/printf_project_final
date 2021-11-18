/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_X.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:06:23 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/18 09:52:54 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../component/component.h"
#include "../tmp.h"

void	handle_x(t_formatData data)
{
	unsigned int	ui;

	ui = va_arg(data->ap, unsigned int);
	LEN_PRINTED += print_unsigned_int_hex(ui);
	return ;
}

void	print_unsigned_int_hex(unsigned int decimal)
{
	 printHexBase(decimal);
	 return ;
}
