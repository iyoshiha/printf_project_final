/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_and_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 05:50:26 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/25 02:58:41 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../includes/handle.h"
#include "../includes/printHexBase.h"

int	convertAndCount(t_formatData *data)
{
	int	ret;

	if ((data->format[data->format_i]) == ('c'))
		ret = handle_c(data);
	if ((data->format[data->format_i]) == ('s'))
		ret = handle_s(data);
	if ((data->format[data->format_i]) == ('p'))
		ret = handle_p(data);
	if ((data->format[data->format_i]) == ('d'))
		ret = handle_d(data);
	if ((data->format[data->format_i]) == ('i'))
		ret = handle_i(data);
	if ((data->format[data->format_i]) == ('u'))
		ret = handle_u(data);
	if ((data->format[data->format_i]) == ('x'))
		ret = handle_lower_x(data);
	if ((data->format[data->format_i]) == ('X'))
		ret = handle_large_x(data);
	if ((data->format[data->format_i]) == ('%'))
		ret = handle_pct(data);
	return (ret);
}
