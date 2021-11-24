/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 03:01:04 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/25 02:51:05 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf(const	char *format, ...)
{
	t_formatData	entity;
	t_formatData	*data;

	data = &entity;
	data->format = format;
	if (!(data->format))
		return (ERROR);
	data->printed_len = 0;
	va_start(data->ap, format);
	outputAndCount(data);
	va_end(data->ap);
	return (data->printed_len);
}
