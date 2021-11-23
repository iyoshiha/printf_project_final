/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_large_x.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:06:49 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/21 15:33:33 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printHexBase.h"
# include "../includes/ft_printf.h":wq


int		handle_large_x(t_formatData* data)
{
	unsigned int	ui;
	int				printed_num;

	ui = va_arg(data->ap, unsigned int);
	printed_num = printHexBase(ui, PHEX_CAPITAL);
	return (printed_num);
}
