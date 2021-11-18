/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:06:46 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/18 19:18:26 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../component/component.h"
# include "../tmp.h"

int		handle_u(t_formatData*	data)
{
	unsigned int	unsigned_decimal;
	int				printed_num;

	unsigned_decimal = va_arg(data->ap, unsigned);
	printed_num = printUnsignedDecimal(unsigned_decimal, STDOUT_FILENO);
	return (printed_num);
}
