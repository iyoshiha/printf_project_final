/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:06:37 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/18 19:28:56 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../component/component.h"
# include "../tmp.h"

int		handle_i(t_formatData* data)
{
	int		decimal;
	int 	printed_num;

	decimal = va_arg(data->ap, int);
	printed_num = printDecimalBase(decimal, STDOUT_FILENO);
	return (printed_num);
}
